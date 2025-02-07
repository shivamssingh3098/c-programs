#include <stdio.h>

int main()
{
    int marks[] = {50, 70, 60, 55};
    int marks2[5] = {
        10,
        20,
        30,
        40,
        50,
    };

    // printf("0 index: %d\n", marks[0]);
    // printf("1 index: %d\n", marks[1]);
    // printf("2 index: %d\n", marks[2]);
    // printf("3 index: %d\n", marks[3]);

    // printf("second  array\n");
    // printf("0 index: %d\n", marks2[0]);
    // printf("1 index: %d\n", marks2[1]);
    // printf("2 index: %d\n", marks2[2]);
    // printf("3 index: %d\n", marks2[3]);
    // printf("4 index: %d\n", marks2[4]);
    // printf("5 index: %d\n", marks2[5]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d index : %d\n", i, marks2[i]);
    }

    // marks2[5]
}