// Online C compiler to run C program online
#include <stdio.h>
void rec(int x);

int main()
{
    int a = 0;
    rec(a);
    return 0;
}

void rec(int x)
{
    if (x == 10)
    {
        return;
    }
    printf("hellow %d \n", x);
    rec(x + 1);
}