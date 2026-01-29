#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student s1;
	struct student s2;
	printf("Enter the name,roll no. and marks of student\n");
	scanf("%s %d %f",s1.name,&s1.roll,&s1.marks);
	s2 = s1;

	printf("Name: %s\nRoll no.%d\nMarks: %2f\n",s2.name,s2.roll,s2.marks);
	return 0;	
}
