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
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}