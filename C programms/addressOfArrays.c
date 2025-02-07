#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = &a[2];
    ptr--; // ptr = ptr+1

    for (int i = 0; i < 5; i++)
    {
        printf("value of index %d is %d  and address of index %d \n", i, a[i], &a[i]);
    }

    printf("=> address is  %d and value  is %d\n", ptr, *ptr);

    return 0;
}