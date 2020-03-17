#include<stdio.h>
#include<string.h>


int main(){
	
	char data[17]="C programming";
	int length = strlen(data);
	int i;
	
	FILE *files = fopen("cfile.txt","w");
	if(files==NULL){
		
		printf("File cannot be generated!");
	}
	else{
		for(i=0;i<length; i++){
			fputc(data[i],files);
			printf("Character: %c\n",data[i]);
		}
		
		printf("File was created successfully.");
		fclose(files);
		
		
	}
}
