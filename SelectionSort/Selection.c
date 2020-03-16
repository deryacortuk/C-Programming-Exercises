#include<stdio.h>
#define Max 17

void selectionSort(int arr[],int size){
	
	int i,j;
	int min,temp;
	
	for(i=0; i< size; i++){
		
		min =i;
		
		for(j=i; j<size; j++){
			
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		 temp = arr[i];
		 arr[i]= arr[min];
		 arr[min]=temp;
	}
	
	
}
int main(){
	int arr[Max],size;
	int i;
     printf("Array size:");
     scanf("%d",&size);
     
     for(i=0; i<size; i++){
     	scanf("%d",&arr[i]);
	 }
	 selectionSort(arr,size);
	 for(i=0;i<size;i++){
	 	printf("%d ",arr[i]);
	 }
	return 0;
}
