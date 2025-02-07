// Online C compiler to run C program online
#include <stdio.h>
float avargeOfNumbers(float x, float y, float z);

int main()
{

    float a, b, c;
    float avg;

    printf("Enter first number : \n");
    scanf("%f", &a);
    printf("Enter second number : \n");
    scanf("%f", &b);
    printf("Enter third number : \n");
    scanf("%f", &c);
    avg = avargeOfNumbers(a, b, c);

    printf("Average of 3 number is %f", avg);

    return 0;
}

float avargeOfNumbers(float x, float y, float z)
{
    // float sum = (x+y+z);
    // float avg=sum/3;
    // return avg;
    //   ----------or----------
    // return (x+y+z)/(float)3;
    // -----------or-----------
    float avg = (x + y + z) / 3;
    return avg;
}
