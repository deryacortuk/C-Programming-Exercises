#include<stdio.h>

char *name(char *seasons[], int length, int season){
	
	if(season>=1 && season <=4){
		return seasons[season-1];
	}
	else{
		return NULL;
	}
}

int main(){
	
	char *seasonArray[4] = {"winter","spring","summer","autumn"};
	char *p = name(seasonArray,3,2);
	if(p==NULL){
		printf("NULL");
	}
	else{
		printf("%s",p);
	}
	
	return 0;
}
