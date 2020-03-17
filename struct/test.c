#include<stdio.h>
#include<string.h>


struct Country{
	char region[7];
	char city[17];
	char avenue[19];
	
};

struct User{
	char name[17];
	char surname[17];
	int id;	
	struct Country address;
};

int main(){
	struct User user;
	strcpy(user.name,"Derya");
	strcpy(user.surname,"CORTUK");
	user.id =7;
	strcpy(user.address.region,"south");
	strcpy(user.address.city,"Berlin");
	strcpy(user.address.avenue,"Wittenau");
	
	printf("%s %s %d %s %s %s",user.name,user.surname,user.id,user.address.region,user.address.city,user.address.avenue);
	
	
	
	
	return 0;
}
