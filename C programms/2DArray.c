#include <stdio.h>

int main()
{
    int a1[5][3] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100, 101, 102, 103, 104, 105};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%dX%d => %d address of this index %d", i, j, a1[i][j], &a1[i][j]);
            printf("\n");
        }
    }

    // printf("This is boilerplate");
    return 0;
}