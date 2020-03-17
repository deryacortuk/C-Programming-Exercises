#include<stdio.h>

struct library {
	char name[100];
	char author[100];
	int publishedYear;
	
};

int main(){
	struct library book[3];
	int i;
	for(i=0;i<3; i++){
		printf("%d  book information:",i+1);
		scanf("%s %s %d",&book[i].name,&book[i].author,&book[i].publishedYear);
	}
	
	for(i=0;i<3;i++){
		
		printf("%d book details %s %s %d\n",i+1,&book[i].name,&book[i].author,&book[i].publishedYear);
	}
	return 0;
}
