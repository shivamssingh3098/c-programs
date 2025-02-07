#include <stdio.h>
int fact(int x);

int main()
{
    int n = 3;
    int finalFact = fact(n);
    printf("final Fact: %d\n", finalFact);
}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }

    int f = num * fact(num - 1);

    return f;
}