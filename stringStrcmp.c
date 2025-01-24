#include <stdio.h>
#include <string.h>

int main()
{

    // When both string are same

    printf("When both string are same %d\n", strcmp("ABCD", "ABCD"));

    // When first string has greater ASCII characters

    printf("When first string has greater ASCII characters %d\n", strcmp("ABCF", "ABCD"));

    // When second string has greater ASCII characters

    printf("When first string has greater ASCII characters %d\n", strcmp("ABCD", "ABCF"));

    return 0;
}