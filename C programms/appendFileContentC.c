#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fileForFilePointer.txt", "a");

    fprintf(ptr, "%s \n", "This is shivam new ");

    fclose(ptr);

    return 0;
}