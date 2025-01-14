#include <stdio.h>

int sum_of_number_is();

int main()
{
    int n;
    printf("Enter the number for sum : ");
    scanf("%d", &n);

    int sum = sum_of_number_is(n);
}

int sum_of_number_is(int num)
{
    printf("Number is %d\n", num);
}