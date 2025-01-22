#include <stdio.h>

int main()
{
    char str[10];
    printf("Enter a string : \n");
    fgets(str, sizeof(str), stdin);
    puts(str);
    // printf("Entered String is : %s\n", str);
    return 0;
}