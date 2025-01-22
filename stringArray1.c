#include <stdio.h>

int main()
{
    // char ch[] = {'S', 'H', 'I', 'J', 'K', 'L', 'M', 'N', '\0'};
    // or
    char ch[] = "shivam";
    // int i = 0;
    // while (ch[i] != '\0')
    // {
    //     printf("%c", ch[i]);
    //     i++;
    // }
    // print by for loop

    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     printf("%c", ch[i]);
    // }

    // shortcut method to print
    printf("%s", ch);

    // printf("%c", ch[0]);
    return 0;
}