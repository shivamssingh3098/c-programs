#include <stdio.h>

int main()
{
    int a1[5][3][2] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100, 101, 102, 103, 104, 105, 11, 22, 33, 44, 55, 66, 77, 88, 99, 100, 101, 102, 103, 104, 105};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%dX%dX%d => %d address of this index %d", i, j, k, a1[i][j][k], &a1[i][j][k]);
                printf("\n");
            }
        }
    }

    // printf("This is boilerplate");
    return 0;
}