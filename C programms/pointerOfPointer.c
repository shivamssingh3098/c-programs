#include <stdio.h>
int summ(int n);

int main()
{
    int a = 5;
    int *b = &a;
    int **c = &b;
    *b = 10;
    **c = 9;

    printf("%d \n", **c);
    printf("%d", *b);

    return 0;
}
