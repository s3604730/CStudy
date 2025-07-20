#include <unistd.h>

int mystrlen(char * str)
{
    int i;
    for(i=0; str[i]; i++);

    return i;
}



int main(int argc, char *argv[])
{
    char str[] = "Hello World!\n";
    write(1, str, mystrlen(str));
}

