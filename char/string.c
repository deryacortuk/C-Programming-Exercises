#include<stdio.h>
#include<string.h>

void reversed(char array[]){
	
	int i, length,temporary;
	length = strlen(array);
	
	for(i=0; i<length/2; i++ ){
		
		temporary = array[i];
		array[i] = array[length-1-i];
		array[length-1-i] = temporary;
		
	}
	
	
}


int main(){
	char text[170];
	scanf("%s", &text);
	reversed(text);
	printf("%s", text);
	
	
	return 0;
}
