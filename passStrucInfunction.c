#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roleNo;
    char name[30];
    int age;
} stu;
void printStudentData(struct student s);
int main()
{
    struct student s2;
    struct student *s3 = &s2;
    stu s1;
    stu *ptrS;

    s1.roleNo = 10;
    strcpy(s1.name, "shivam");
    s1.age = 30;
    // *s3 = &s2;
    // *strS = &s1;
    printStudentData(s1);

    s2.roleNo = 300;
    strcpy(s2.name, "shivam");
    s2.age = 100;

    printf("name->: %s, age: %d,  roleNo: %d\n", s3->name, (*s3).age, s3->roleNo);
    return 0;
}

void printStudentData(struct student s)
{
    printf("Student data in Student function:\n");
    printf("name: %s, age: %d,  roleNo: %d\n", s.name, s.age, s.roleNo);
}