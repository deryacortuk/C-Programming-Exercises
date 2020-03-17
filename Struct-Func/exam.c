#include<stdio.h>

struct students{
	
	char name[13];
	char surname[11];
	int id;
};


void showInfo(struct students x){
	
	printf("student data: %d %s %s",x.id,x.name,x.surname);
	
}

struct students addStudent(){
	
	struct students newStudent;
	printf("enter new student information:");
	scanf("%d %s %s", &newStudent.id,&newStudent.name,&newStudent.surname);
	return newStudent;
	
}

int main(){

	struct students student = addStudent();
	showInfo(student);
	
	
	
}
