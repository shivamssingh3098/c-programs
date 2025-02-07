#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number for switch case: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    {
        printf("The number is %d", n);
        break;
    }
    case 2:
    {
        printf("The number is %d", n);
        break;
    }

    case 3:
    {
        printf("The number is %d", n);
        break;
    }
    case 4:
    {
        printf("The number is %d", n);
        break;
    }

    default:
    {
        printf("There is no matching");
        break;
    }
    }
}