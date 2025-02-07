// Online C compiler to run C program online
#include <stdio.h>
// void rec(int x);

int main()
{

    int a = 200;

    for (int i = 0; i <= 200; i++)
    {
        a -= i;
        if (a >= 0)
        {

            printf("%d, %d \n", a, i);
        }
        else
        {
            // printf("%d, %d \n",a, i);
            break;
        }
    }
}