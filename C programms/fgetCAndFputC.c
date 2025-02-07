#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fileForFilePointer.txt", "r");

    // fprintf(ptr, "%s \n", "This is shivam new ");
    // char a = fgetc(ptr);
    // printf("%c\n", a);
    // char b = fgetc(ptr);
    // printf("%c\n", b);

    // reading all characters of the file

    char c = fgetc(ptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }

    fclose(ptr);

    return 0;
}