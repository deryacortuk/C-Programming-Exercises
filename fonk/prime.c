#include<stdio.h>


int prime_number(int number){
	
	
	int i;
	for(i=2;  i<number; i++){
		if(number %i==0){
			
			return 0;
		}
		
	}
	return 1;
	
}

int main(){
	
	int x;
	printf("number:" );
	scanf("%d",&x);
	if(prime_number(x)==0){
		printf("number is not a prime number.");
	}
	else{
		printf("number is a prime number");
	}
	
	
	return 0;
}
