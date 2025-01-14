
// MYSYS2: https://www.msys2.org/  website
// Command : pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain   run this command
// msys64 > ucrt64 > bin>    add this path in enviroment variables
// open vscode install c/c++ extension pack

#include <stdio.h>
void a();
int main()
{
    int i = 0;
    a();
    // while (true)
    // {
    //     printf("welcome to first program %d\n", i);
    //     i++;
    // }
    return 0;
}
void a()
{
    printf("welcome to first program");
}
