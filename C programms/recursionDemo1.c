// Online C compiler to run C program online
#include <stdio.h>
int printName(int a);

int main()
{

    int n = 10;

    printName(n);

    return 0;
}

int printName(int a)
{
    if (a == 0)
    {
        return 0;
    }
    printf("Shivam Singh %d\n", a);
    printName(a - 1);
    printf("Shivam Singh %d\n", a);
}
