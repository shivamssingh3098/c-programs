#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    char course[100];
    int age;
    int rollNo;
};

int main()
{
    struct student s1;

    printf("Student Values are =>\n");
    strcpy(s1.name, "Shivam");
    strcpy(s1.course, "MCA");
    s1.age = 27;
    s1.rollNo = 10;

    printf("Name : %s, age : %d , Roll No: %d, Course : %s\n", s1.name, s1.age, s1.rollNo, s1.course);

    struct student s2;

    // printf("Student Values are =>\n");
    strcpy(s2.name, "Alok");
    strcpy(s2.course, "M.Voc");
    s2.age = 26;
    s2.rollNo = 13;

    printf("Name : %s, age : %d , Roll No: %d, Course : %s\n", s2.name, s2.age, s2.rollNo, s2.course);
    return 0;
}