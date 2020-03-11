#include<stdio.h>
#define PI 3.14

int main(){
	
	int radius;
	float volume;
	
	printf("sphere radius:");
	scanf("%d", &radius);
	
	volume = (4/3)* PI*(radius*radius*radius);
	printf("sphere volume %.3f", volume);
	return 0;
	
	
}
