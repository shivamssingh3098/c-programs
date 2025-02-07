// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("Enter number for %dX%d : \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("index [%d,%d] value, : %d  \n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}