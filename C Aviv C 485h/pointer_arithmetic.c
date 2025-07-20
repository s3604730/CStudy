#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]){
    int a[] = {10, 11, 12, 13,14};
    short s[] = {10, 11, 12, 13, 14};
    char c[] = {10, 11, 12, 13, 14};

    int i;
    for(i=0; i<5; i++){
        printf("a+%d=%p * (a+%d) = %d\n", i, a+i, i, a[i]);

    }
    printf("\n");


    for(i=0; i<5; i++)
    {
        printf("s+%d=%p *(s+%d) = %d\n", i, s+i, i, s[i]);
    }

    printf("\n");

    for (i=0; i<5; i++)
    {
        printf("c+%d=%p *(c+%d) = %d\n", i, c+i, i, c[i]);
    }

    return 0;
}