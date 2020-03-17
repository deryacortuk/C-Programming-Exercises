#include<stdio.h>
#include<string.h>

struct Users{
	
	char name[20];
	char surname[20];
	int id;
		
};

int main(){
	struct Users user;
	struct Users *contain;
	strcpy(user.name,"Derya");
	strcpy(user.surname,"Cortuk");
	user.id = 17;
	contain = &user;
	
	//printf("%s %s %d\n", user.name,user.surname,user.id);
	printf("%s %s %d", contain->name,contain->surname,contain->id);
	
}
