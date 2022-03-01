#include<stdio.h>

int main(){
	
	int number,i;
	printf("Please enter a number(1 to n):");
	scanf("%d", &number);
	
	if(number>0){
		printf("Enter a number:%d\n",number);
		for(i=2;i<number;i++){
			if(i%2==0 && i*i<=number){
			printf("%d\n", i*i);
		}
		}
		
	}
	
		
	
	return 0;
}
