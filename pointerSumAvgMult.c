#include <stdio.h>
void calculate(int x, int y, float *sum, float *avg, float *mult);

int main()
{
    int a = 15, b = 5;
    float sum = 0.0;
    float avg = 0.0;
    float mult = 0.0;

    calculate(a, b, &sum, &avg, &mult);
    printf("sum of %d and %d is %f\n", a, b, sum);
    printf("avg of %d and %d is %f\n", a, b, avg);
    printf("mult of %d and %d is %f\n", a, b, mult);

    return 0;
}

void calculate(int x, int y, float *sum, float *avg, float *mult)
{

    *sum = x + (float)y;
    *avg = (x + (float)y) / 2;
    *mult = x * (float)y;
}