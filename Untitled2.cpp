#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
struct student input() {
    struct student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name-%s\nRoll-%d\nMarks-%2f\n",s.name,s.roll,s.marks);
    return s;
}
int main() {
    struct student s1 = input();
    return 0;
}

