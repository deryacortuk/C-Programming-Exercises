#include<stdio.h>

void changeValue(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	
	
}
int main(){
	int x = 7, y =17;
	changeValue(&x,&y);
	printf("x: %d y :%d",x,y);
	
}
