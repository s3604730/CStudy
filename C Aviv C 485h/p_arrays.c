#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]){
    int a[] = {10, 11, 12, 13, 14};
    int *p = a;
    *(p+2) = 5;
    printf("a=%p p=%p\n", a, p);

    int i;
    for(i=0; i<5; i++)
    {
        printf("a+%d=%p * (a+%d) = %d\n", i, a+i, i, a[i]);

    }
    return 0;
}