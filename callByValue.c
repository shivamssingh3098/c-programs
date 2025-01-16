
#include <stdio.h>
void printValue(int n);

int main()
{
    int n = 5;
    printValue(n);
    printf("%d", n);
    return 0;
}

void printValue(int n)
{
    n = 10;
    printf("%d\n", n);
}
