#include<stdio.h>
#include<string.h>

struct Students{
	
	char name[15];
	char surname[15];
	int old;
	
};
struct Students *getStudent(struct Students *p){
	  strcpy(p->name ,"sieben");
	  strcpy(p->surname ,"heissen");
	  p->old =13;
	  
	  return p;

}

void showInfo(struct Students *s){
	
	printf("student's information\nName:%s\nSurname:%s\nOld:%d\n",s->name,s->surname,s->old);
}


/*struct Students add(){
	
	struct Students new;
	printf("new student add:");
	scanf("name: %s surname:%s old: %d",&new.name,&new.surname,&new.old);
	return new;
} */


int main(){
	struct Students student ={"Alex","Graxel",45};
	
	struct Students *detail;
	

	detail = getStudent(&student);
	printf("%s %s %d", detail->name,detail->surname,detail->old);
	
	return 0;
}
