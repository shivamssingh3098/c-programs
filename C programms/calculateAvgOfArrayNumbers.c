#include <stdio.h>

int main()
{
    int a[5] = {1, 20, 6, 41, 5};
    // float avg = (a[0] + a[1] + a[2] + a[3] + a[4]) / (float)5;

    float avg = 0.0;
    float sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", a[i]);
        sum += a[i]; // sum = sum+a[i]
    }

    printf("Avg of array numbers: %f\n", sum / 5);
    return 0;
}