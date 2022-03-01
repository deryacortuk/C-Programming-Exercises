#include<stdio.h>

int main(){
	int number,i=1;
	printf("Please enter a number (1 to n): ");
	scanf("%d", &number);
	
	printf("Enter number:%d\n",number);
	while( i>0){
	
	if(number>=i){
		printf("%d\n",i*i);
	}
	
	++i;	
	}
	
	
	return 0;
}
