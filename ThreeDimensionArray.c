// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[3][3][3];
    //   int *ptr=&arr[043];

    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("Enter number for %dX%dX%d : \n", i, a, j);
                scanf("%d", &arr[i][a][j]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("index [%d,%d,%d] value, : %d  \n", i, a, j, arr[i][a][j]);
            }
        }
        printf("\n");
    }

    return 0;
}