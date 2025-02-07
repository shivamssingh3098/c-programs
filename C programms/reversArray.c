#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 4; i >= 0; i--)
    {
        printf("index:%d => value %d\n", i, arr[i]);
    }

    // printf("This is boilerplate");
    return 0;
}