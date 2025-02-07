#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter a number for calloc() function : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

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