#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a = 6, b = 9;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;

    // printf(" x: %d y: %d\n", *x, *y);
}

// #include <stdio.h>

// int main()
// {
//     int a = 5, b = 8;
//     int *temp;

//     printf("Befor swaping %d and %d is\n", a, b);

//     temp = &a;
//     a = b;
//     b = *temp;
//     printf("after swaping %d and %d is\n", a, b);
//     return 0;
// }