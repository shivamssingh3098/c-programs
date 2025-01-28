#include <stdio.h>

struct student
{

    char name[30];
    int age;
    int roleNo;
};

void printStudentData(struct student s1);

int main()
{
    struct student s1 = {"shivam", 25, 11};
    printStudentData(s1);
    printf("Name: %s, age: %d, roleNo: %d \n", s1.name, s1.age, s1.roleNo);
    // printf("This is boilerplate");
    return 0;
}

void printStudentData(struct student s2)
{
    s2.age = 45;
    printf("Name: %s, age: %d, roleNo: %d \n", s2.name, s2.age, s2.roleNo);

    // printf("This is boilerplate");
}