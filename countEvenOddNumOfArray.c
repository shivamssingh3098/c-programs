#include <stdio.h>

int main()
{
    int n;
    int even = 0;
    int odd = 0;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d  number in array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("index : %d  number in array : %d\n", i, arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
            printf("Even number is %d \n", arr[i]);
        }
        else
        {
            odd++;
            printf("Odd number is %d\n", arr[i]);
        }
    }
    printf("Total Even number is %d and total odd number is %d\n", even, odd);

    return 0;
}