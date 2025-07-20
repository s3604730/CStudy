#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(void) {return; }

int main(int argc, char *argp[], char *envp[]){
    int a = 10;

    char stack_str[] = "Hello";

    char *heap_str = malloc(strlen(stack_str) +1);
    strcpy(heap_str, stack_str);

    char * bss_str = "World";

    printf("(reserved) envp = 0x%08x \n", envp);
    printf("(stack) &a= 0x%08x \n", &a);
    printf("(stack) stack_str = 0x%08x \n");
    printf("(heap) heap_str = 0x%08x \n", heap_str);
    printf("(bss) bss_str = 0x%08x \n", bss_str);
    printf("(text) main=0x%08x \n");
    printf("(text) foo=0x%08x \n", foo );

}