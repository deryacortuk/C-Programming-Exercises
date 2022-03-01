#include<stdio.h>

int main(){
	
	int number,i;
	printf("Please enter a number (1 to n):");
	scanf("%d",&number);
	
	printf("Enter number:%d\n",number);
	for(i=1;i<number+1;i++){
		if(i%2!=0 && number>i*i){
			printf("%d\n", i*i);
		}
	}
	
	return 0;
}
