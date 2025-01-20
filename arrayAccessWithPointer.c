#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int *ptr = &arr[0];
    for (int i = 0; i < 6; i++)
    {
        printf("index %d value, : %d and pointer value is : %d \n", i, arr[i], *(ptr++));
    }

    return 0;
}