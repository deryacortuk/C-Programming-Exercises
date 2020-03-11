#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;

	float delta;
	float x1,x2;
	printf("equation a:");
	scanf("%d", &a);
	printf("equation b:");
	scanf("%d",&b);
	printf("equation c:");
	scanf("%d",&c);
	
	delta = b*b -4*a*c;
	
	if(delta>=0){
		x1 =(-b-(sqrt(delta)))/2*a;
		x2 = (-b+(sqrt(delta)))/2*a;
		printf("x1: %f.3  x2: %f.3 ",x1,x2);
	
	}
	else{
		printf("no real root!");
	}
	
	return 0;
}
