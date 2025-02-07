#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter 5 values for malloc function : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Output of  5 values for malloc function : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("pointer is %d\n", ptr[i]);
    }

    return 0;
}