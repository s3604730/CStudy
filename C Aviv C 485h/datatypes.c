#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char c = 0xef;
    short s = 0xbeef;
    int i =0xdeadbeef;
    long l = 0xcafebabe;


    printf("char c =%d size %u\n", c, sizeof(char));
    printf("short s=%d size%u\n", s, sizeof(short));
    printf("int i=%d size=%u\n", i, sizeof(int));
    printf("long l=%ld size%u\n", l, sizeof(long));
    return 0;
}