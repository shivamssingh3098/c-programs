#include <stdio.h>

int table(int n, int i);

int main()
{
    int a = 5;

    int i = 10;
    table(a, i);
    return 0;
}

int table(int n, int i)
{
    if (i == 0)
    {
        return 1;
    }

    table(n, i - 1);

    printf("%d+%d=%d \n", n, i, n + i);
}