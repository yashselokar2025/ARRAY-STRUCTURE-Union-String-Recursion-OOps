#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct  student s2;
	printf("Enter the name,roll no. and marks of student\n");
	scanf("%s %d %f",s2.name,&s2.roll,&s2.marks);
	
	printf("Name: %s\nRoll no.%d\nMarks: %2f\n",s2.name,s2.roll,s2.marks);
	return 0;	
}
