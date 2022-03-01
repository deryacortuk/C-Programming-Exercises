#include<stdio.h>

int main(){
	
	int number,i;
	
	printf("Please enter a number: ");
	scanf("%d",&number);
	for(i=1;i< number+1; i++){
		
		printf("%d %d\n",i, i*i);
	}
	
	return 0;
}
