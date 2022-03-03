#include<stdio.h>

int main(){
	
	int array[10];
	int i;
	
	printf("Please enter 10 integer numbers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&array[i]);
	}
	printf("Array elements in reverse order:\n");
	for(i=10-1;i>=0;i--){
		printf("%d ", array[i]);
	}
	
	
	return 0;
}
