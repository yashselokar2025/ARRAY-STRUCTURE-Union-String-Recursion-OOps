#include<stdio.h>
struct student{
	int roll;
	float marks;
	};
struct student getData(){
	struct student s;
	printf("Enter the roll and marks");
	scanf("%d %f",&s.roll,&s.marks);
	return s;
}
int main(){
	struct student s1;
	s1 = getData();
	printf("roll is %d and marks is %2f",s1.roll,s1.marks);
	return 0;
}
