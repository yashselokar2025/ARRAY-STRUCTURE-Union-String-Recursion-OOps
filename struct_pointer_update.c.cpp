#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};
void update(struct student*s){
	s->marks += 5;
}
void display(struct student s){
	printf("Roll:%d\nName:%s\nMarks:%2f\n",s.roll,&s.name,&s.marks);
}
int main()
{
	struct student s1={1,"Animesh",84.45};
	update(&s1);
	display(s1);
	
}
