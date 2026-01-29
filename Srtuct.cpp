#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student s1 = {"Yash",60,8.23};
	printf("Name: %s\nRoll no.%d\nMarks: %2f\n",s1.name,s1.roll,s1.marks);
	return 0;	
}
