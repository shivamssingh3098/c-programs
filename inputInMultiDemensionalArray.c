#include <stdio.h>

int main()
{
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter number for %dX%d\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %dX%d => %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}