#include <stdio.h>
typedef struct computerEngineerStudents
{
    char name[50];
    int age;
    int roleNo;
} ces;
int main()
{
    struct computerEngineerStudents s1 = {"Shivam", 27, 11};

    ces s2 = {"Alok", 20, 10};

    printf("normal print\n");
    printf("Name: %s, age: %d, roleNo: %d \n", s1.name, s1.age, s1.roleNo);
    printf("Name: %s, age: %d, roleNo: %d \n", s2.name, s2.age, s2.roleNo);
    return 0;
}