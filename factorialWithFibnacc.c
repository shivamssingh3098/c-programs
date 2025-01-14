// Online C compiler to run C program online
#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number to calculate \n");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("factorial is => %d", fact);
    return 0;
}

int factorial(int n)
{
    int factorialValue = 0;

    printf("Entered  number is %d \n", n);
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int a = factorial(n - 1);
        factorialValue = n * a;
        // or
        //   factorialValue = n*factorial(n-1);
        printf("factorial value in each time function call %d \n", factorialValue);
        return factorialValue;
    }
}