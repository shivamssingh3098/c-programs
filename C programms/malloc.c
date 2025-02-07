#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;
    printf("Enter the length of the memory \n");
    scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int)); //  || int ptr[5] ;  <= malloc

    ptr = (int *)calloc(n, sizeof(int)); //  || int ptr[5] ;  <= calloc

    printf("Enter %d numbers for malloc \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Number in malloc memory is => \n");

    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d \n", i, ptr[i]);
    }
    // free(ptr);
    printf("Realloc => \n");
    ptr = realloc(ptr, 3 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    printf(" output of Realloc => \n");
    for (int i = 0; i < 5; i++)
    {
        printf("ptr[%d] = %d \n", i, ptr[i]);
    }

    return 0;
}