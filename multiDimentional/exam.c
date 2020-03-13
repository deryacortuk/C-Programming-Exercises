#include<stdio.h>

int main(){
	int matrix[3][5];
	int i,j;
	int total =0;
	
	for(i=0;i<3;i++){
	
		for(j=0;j<5; j++){
			
			scanf("%d", &matrix[i][j]);
		}
		
	}
	
	
	for(j=0; j<5; j++){
		
		for(i=0;i<3;i++){
			total += matrix[i][j];
			
		}
		printf("%d ",total);
		total=0;
	}
	
	
	
	return 0;
	
}
