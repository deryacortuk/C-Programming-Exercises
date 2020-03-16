#include<stdio.h>
#define Max 17



void insertionSort(int arr[], int size){
	int i,j;
	int entry;
	
	for(i=1; i<size;i++){
		entry =arr[i];
		j =i-1;
		while(j>= 0 &&arr[j] > entry){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1] = entry;
	}
	
}
int main(){
	
	int arr[Max],size;
	int i;
	printf("Array size:");
	
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
		
		scanf( "%d",&arr[i]);
	}
	insertionSort(arr,size);
	
	for(i=0; i<size;i++){
		
		printf("%d ",arr[i]);
	}
	
	return 0;
}
