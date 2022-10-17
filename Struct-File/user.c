#include<stdio.h>

struct Employee{
	int ID;
	char name[10];
	char surname[10];
};

int main(){
	FILE *file;
	struct Employee emp1;
	struct Employee emp2;
	int i, num;
	struct Employee emp3 = {1,"Blue","White"};
	struct Employee emp4 = {2,"Green","Grey"	};
	struct Employee emp5 = {3,"Black","Yellow"	};
	struct Employee emp6 = {4,"Red","Orange"	};
	file = fopen("employee.txt","w");
	fwrite(&emp3,sizeof(emp1),1,file);
	fwrite(&emp4,sizeof(emp1),1,file);
	fwrite(&emp5,sizeof(emp1),1,file);
	fwrite(&emp6,sizeof(emp1),1,file);
	fclose(file);
	
	fopen("employee.txt", "r");
	for(i = 0;i < 4; i++){
		num = fread(&emp2,sizeof(emp2), 1,file);
		if(num == 1){
			printf("ID: %d", emp2.ID);
			printf("\tName: %s", emp2.name);
			printf("\tLast Name: %s\n",emp2.surname);
		}
		else{
			
			if(feof(file)){
				printf("Error: unexpected end of file is %p", file);
			}
			else if(ferror(file)){
				perror("Error reading!");
			}
		}
	
	}
	
	fclose(file);
}
