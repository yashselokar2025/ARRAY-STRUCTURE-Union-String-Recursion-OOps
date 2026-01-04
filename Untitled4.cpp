#include<stdio.h>
struct student{
	int roll;
	float marks;
};
void display(struct student s){
	printf("Roll:%d\n",s.roll);
	printf("Marks:%2f\n",s.marks);
}
int main()
{
	struct student s1 = {101,66.6};
	display (s1);
	return 0;	
}
