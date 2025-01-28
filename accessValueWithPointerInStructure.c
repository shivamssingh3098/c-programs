// Online C compiler to run C program online
#include <stdio.h>

struct student
{
    char name[50];
    int age;
    int roleNo;
};

int main()
{
    struct student s1 = {"Shivam", 27, 11};
    struct student s2 = {"alok", 26, 15};

    struct student *sPtr;
    sPtr = &s1;

    printf("Name: %s, age: %d, roleNo: %d \n", s1.name, s1.age, s1.roleNo);
    printf("Name: %s, age: %d, roleNo: %d \n", s2.name, s2.age, s2.roleNo);

    printf("Print values by Pointer \n");

    printf("Name-> %s, age-> %d, roleNo-> %d \n", (*sPtr).name, (*sPtr).age, (*sPtr).roleNo);
    // or
    printf("Name-> %s, age-> %d, roleNo-> %d \n", sPtr->name, sPtr->age, sPtr->roleNo);

    return 0;
}