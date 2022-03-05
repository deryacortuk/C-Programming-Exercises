#include<stdio.h>

int main(){
	
    int myarray[5][3]={{2,4,6},{1,2,3},{3,6,9},{4,8,12},{5,10,15}};
    int  (*my_pointer)[3]=myarray;
    int i,j,column,sum=0;
    
    printf("Array has 3 columns.\n");
    printf("Please enter a column number to calculate the sum of its elements:");
    scanf("%d",&column);
    
    for(i=0;i<5;i++){
    	
    	sum += *(*(my_pointer + i)+column-1);
    	
	}
    
    
    printf("The sum of elements is:%d ",sum);
    
	
	
	return 0;
}
