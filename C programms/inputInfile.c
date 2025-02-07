#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fileForFilePointer.txt", "a");

    // writing file content
    int n;
    printf("Enter a number to save table of that number in file.\n");
    scanf("%d", &n);
    int c = 0;

    while (c < 10)
    {
        fputc(n, ptr);
        c++;
    }

    fclose(ptr);

    return 0;
}