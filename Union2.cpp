#include<stdio.h>
struct Student{
	char name[30];
	int roll ;
	union Result{
		float percentage;
		float cgpa;
	} result;
	};
int main() {
	struct Student s;
	printf("Enter student name: ");
	scanf("%s",s.name);
	printf("Enter the roll number: ");
	scanf("%d",&s.roll);
	s.result.percentage = 87.50;
	
	printf("\n--- Student Resut(First run) ---\n");
	printf("Name %s\n",s.name);
	printf("Roll No. %d\n",s.roll);
	printf("Percentage: %.2f%%\n",s.result.percentage);
	s.result.cgpa =9.1;
	printf("\n--- Student Resut(Second run) ---\n");
	printf("Name %s\n",s.name);
	printf("Roll No. %d\n",s.roll);
	printf("CGPA: %.2f%%\n",s.result.cgpa);
	printf("Percentage after storing CGPA(overwritten): %.2f\n",s.result.percentage);
	return 0;
}	
