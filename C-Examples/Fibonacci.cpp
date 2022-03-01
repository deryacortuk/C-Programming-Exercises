#include<stdio.h>

int main(){
	
	int i,j;
	int x=0,y=1;
	
	int nextnum=x+y;
	
	printf("Please enter the number of terms: ");
	scanf("%d",&j);
	
	printf("Fibonacci Series: %d, %d, ", x, y);
	for(i=3;i<=j;i++){
		printf("%d,", nextnum);
		x=y;
		y=nextnum;
		nextnum=x+y;
		
	}
	return 0;
}
