#include<stdio.h>
#include<string.h>




int lenChar(char *p){
	int length =0;
	int i=0;
	for(; p[i] !='\0'; i++){
		length++;
	}
	return length;
	
}

int main(){
	
	char str[] ="algorithm";
	char *p = str;
	printf("%d",lenChar(str));
	printf("\n%s",p);
	
	return 0;
}
