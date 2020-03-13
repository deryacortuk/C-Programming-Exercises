#include<stdio.h>

int main(){
	int x = 7,*it;
	float y = 1.7,*ft;
	double z = 3.14, *db;
	char s = 'd', *ch;
	
	int numbers[ 7] = {1,2,3,4,5,6,7};
	int *arrays;
	
	it =&x;
	ft =&y;
	db =&z;
	ch = &s;
	
	arrays = &numbers[1];
	printf( "%u int value: %d \n ", it,*it);
	printf( "%p int value: %f \n", ft,*ft);
	printf( "%u int value: %lf \n", db,*db);
	printf( "%p int value: %d \n ", ch,*ch);
    printf( "%u int value: %d  \n", arrays,*arrays);
	
	return 0;
}
