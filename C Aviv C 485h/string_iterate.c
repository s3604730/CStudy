#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    char str[] = "Hello World!\n";
    char * c;
    
    for (c = str; *c; c++)
    {
        putchar(*c);
    }

    return 0;
}