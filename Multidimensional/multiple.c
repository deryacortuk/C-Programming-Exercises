#include<stdio.h>

int main(){
	int matrix[3][3]= {{7,3,5},{13,11,17},{19,23,29}};
	int i,j;
	
	for(i=0; i<3;i++){
		
		for(j=0;j<3;j++){
			
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
