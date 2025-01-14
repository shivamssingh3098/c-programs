#include <stdio.h>
void square(int *n);

int main()
{
    int num = 4;
    printf("number is %d\n", num);
    square(&num);
    printf("after function call number is %d\n", num);
    return 0;
}

void square(int *n)
{
    *n = *n * *n;
}