#include <stdio.h>

void printValue(int a);
int main()
{

    int a = 10;

    printf("value of a in parent function is %d\n", a); // 10
    printValue(10);                                     // printValue(a);
    return 0;
}

void printValue(int a)
{
    printf("value of a in child function before change the value of a is %d\n", a); // 10
    a = 20;
    printf("value of a in child function is %d\n", a); // 20
}
