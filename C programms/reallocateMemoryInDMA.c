#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter a size for calloc() function : \n");
    scanf("%d", &n);
    printf(" %d ", n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter a %d numbers for store in calloc()  : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d \n", &ptr[i]);
    }
    printf("Entered numbers are --- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    printf("Going to free memory - \n");
    free(ptr);

    ptr = (int *)calloc(2, sizeof(int));

    for (int i = 0; i < 2; i++)
    {
        printf("free memory:  %d \n", ptr[i]);
    }
    return 0;
}