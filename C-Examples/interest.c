#include<stdio.h>
#include<math.h>
int main(){
	
	int value=100,i,j,year;
	int interest_rate;
	float money_value[10][10];
	
	printf("Please enter the number of years: ");
	scanf("%d",&year);
	printf("Please enter interest rate: ");
	scanf("%d",&interest_rate);
	for(i=1;i<year+1;i++){		
		
		for(j=interest_rate;j<11;j++){
			
			money_value[i][j] =100*pow((1+(float)j/100),i);
			
		
			
		}
	}
	
	printf("Years\n ");
	for(i=1;i<year+1;i++){
		for(j=interest_rate;j<11;j++){
			printf("%d  %.2f\n ",i , money_value[i][j]);
		}
	}
	
	
	return 0;
}
