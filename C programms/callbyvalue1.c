#include <stdio.h>
void printValue(int a);
int main()
{
    int a = 4;
    printValue(a);
    printf("%d", a);
    return 0;
}
void printValue(int a)
{
    a = 8;
    printf("%d\n", a);
}
