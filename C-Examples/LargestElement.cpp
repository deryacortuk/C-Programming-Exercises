#include<stdio.h>

int main(){
	
	int n,i;
	float array[20];
	
	printf("Please enter the number of elements (1 to 20):");
	scanf("%d", &n);
	

	
	for(i=0;i<n;++i){
		printf("Please enter the number:");
		scanf("%f",&array[i]);
		
	}
	for(i=1;i<n;++i){
		if(array[0]<array[i+1]){
			array[0]=array[i+1];
			
		}
	}
	
	printf("Largest element:%.4f", array[0]);
	return 0;
}
