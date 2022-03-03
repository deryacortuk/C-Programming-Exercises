#include<stdio.h>

int main(){
	
	int array[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0} };
	int i,j;
	int row[5],column[5];
	
	for(i=0;i<5;i++){
		row[i]=0;
		for(j=0;j<5;j++){
			row[i] =row[i] + array[i][j];
			
		}
	}for(i=0;i<5;i++){
		column[i]=0;
		for(j=0;j<5;j++){
			column[i] =column[i] + array[j][i];
			
		}
	}
	
	printf("Row Column\n");
	for(i=0;i<5;i++){
		printf("%d  ", row[i]);
		printf("%d  \n", column[i]);
	}
	return 0;
}


