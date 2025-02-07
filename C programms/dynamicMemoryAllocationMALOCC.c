#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 100;
    ptr[3] = 10000;
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}