#include<stdio.h>
#define MAX 67

void bubbleSort(int array[], int size){
	int i,j;
	for(i=0; i<size; i++){
		for(j=1; j<size-i;j++){
			if(array[j-1]> array[j]){
				int temp = array[j];
				array[j]=array[j-1];
				array[j-1]= temp;
			}
			
		}
	}
}

int main(){
	int arr[MAX],size;
	int i;
	printf("Array size: ");
	scanf("%d \n",&size);
	for(i=0; i<size;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,size);
	for(i=0;i<size; i++){
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
