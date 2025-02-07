#include <stdio.h>

int main()
{

    // file read
    // FILE *ptr;
    // ptr = fopen("fileForFilePointer.txt", "r");
    // int num;

    // fscanf(ptr, "%d", &num);

    // printf("Filt value is %d\n", num);
    // fclose(ptr);

    // file write

    FILE *ptr;
    ptr = fopen("fileForFilePointerNotCreated.txt", "w");
    // char name[100] = "shviam singh";

    fprintf(ptr, "%s", "he should be");

    // printf("Filt value is %d\n", num);
    fclose(ptr);

    return 0;
}