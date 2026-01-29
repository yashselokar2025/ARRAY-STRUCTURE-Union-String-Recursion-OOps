#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
void update(struct student *s){
	s->marks += 5;
}
void display(struct student s){
	printf("Roll:%d\nName:%s\nMarks:%2f\n",s.roll, s.name, s.marks);
}
int main()
{
	struct student s1={1,"Animesh",85.0};
	update(&s1);
	display(s1);
	return 0;
}
