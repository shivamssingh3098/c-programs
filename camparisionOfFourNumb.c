#include <stdio.h>

int main()
{
    // Write C code here
    int a, b, c, d;

    printf("Enter 4 numbers to find greatest one : \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("Greatest number is %d\n", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("Greatest number is %d\n", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("Greatest number is %d\n", c);
    }
    else
    {
        printf("Greatest number is %d\n", d);
    }

    // printf("%d%d%d%d", a,b,c,d);

    return 0;
}