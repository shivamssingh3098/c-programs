#include <stdio.h>
int summ(int n);

int main()
{
    int a = 5;
    int sum = summ(a);
    printf("sum %d", sum);
    return 0;
}

int summ(int x)
{
    int sumIs = 0;
    if (x == 1)
    {
        return 1;
    }
    if (x == 0)
    {
        return 1;
    }
    // sumIs= summ(x-1);
    int final = summ(x - 2) + summ(x - 1);
    // return sumIs;
    // printf("final %d \n", final);
    return final;
}