#include <stdio.h>
// Input numbers in array and print the output
int main()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for array index %d and address of index  is %u ", i, &a[i]);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" index is %d and address is %u and  value is %d\n", i, &a[i], a[i]);
    }

    return 0;
}