#include<stdio.h>
#include<string.h>

struct User{
	int ID;
	char name[10];
	char lastname[10];
};

int main(){
	FILE *file;
	long int backward = -1;
	struct User user;
	int i,id,newid,numread;
	char name[10];
	file = fopen("employee.txt","r");
	printf("Employee List\n");
	for(i = 0;i < 4; i++){
		fread(&user, sizeof(user), 1,file);
		printf("\nID: %d Name: %s Last Name: %s",user.ID,user.name,user.lastname);
		
	}
	fclose(file);
	
	file = fopen("employee.txt","r+");
	printf("\nPlease enter ID to update new ID:");
	scanf("%d", &id);
	printf("\nNew ID:");
	scanf("%d",&newid);
	for(i = 0; i < 4; i++){
		fread(&user, sizeof(user),1,file);
		if(user.ID == id){	
			
			user.ID = newid;						
			printf("\n ID: %d Name: %s Last Name: %s",user.ID,user.name,user.lastname);
			fseek(file,backward*sizeof(user), SEEK_CUR);
			fwrite(&user,sizeof(user),1,file);
			break;
		}
	}
	
	fseek(file, sizeof(user),SEEK_END);
	rewind(file);
	
	printf("\nUpdated File\n");
	for(i = 0; i < 4; i++){
		fread(&user,sizeof(user),1,file);
		printf("\n ID: %d Name: %s Last Name: %s",user.ID,user.name,user.lastname);
		
	}
	
	fseek(file,sizeof(user),SEEK_END);
	rewind(file);
	
    numread = fread(&user,sizeof(user),1,file);
    if (numread==1){
    	printf("\nID: %d Name: %s Last Name: %s", user.ID,user.name,user.lastname);
    	
	}
	
	
	
	fclose(file);
	
}
