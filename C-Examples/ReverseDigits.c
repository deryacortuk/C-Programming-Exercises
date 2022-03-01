#include<stdio.h>

int main(){
	int number, remainder, reverse=0;
	printf("Please enter the number: ");
	scanf("%d",&number);
	
	while(number!= 0){
		remainder = number%10;
		reverse = reverse*10 + remainder;
		number /=10;
	}
	printf("reverse number: %d",reverse);
	return 0;
}
