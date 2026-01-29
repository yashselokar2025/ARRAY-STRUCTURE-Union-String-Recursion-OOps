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
	printf("Enter the name,roll no. and marks of student\n\n");
	scanf("%s %d %f",s2.name,&s2.roll,&s2.marks);
	if(s1.name == s2.name)
	{
		printf("The name of both given student is Same\n");
	}
	else if(s1.marks == s2.marks && s1.name == s2.name)
	{
		printf("The name and the marks of the student is Same");
	}
	else if(s1.marks == s2.marks)
	{
		printf("The marks of both the student is Same\n");
	}
	else
	{
		printf("Both the details of student is different");
	}
	return 0;	
}
