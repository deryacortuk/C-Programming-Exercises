#include<stdio.h>

int main(){
	float numbers[5];
	float total=0.0;
	int i;
	for ( i= 0; i<5; i++){
		printf("enter number:");
		scanf("%f",&numbers[i]);
	}
	for(i=0; i<5;i++){
		total +=numbers[i];
		
	}
	printf("numbers average: %.3f",total/5);
	
	return 0;
}
