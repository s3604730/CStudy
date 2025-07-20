#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{

    int l_pos = 0x7fffffff;
    int s_pos = 0x00000000;
    int s_neg = 0x80000000;
    int l_neg = 0xffffffff;


    printf("largest postive = %d \t (00x%08x)\n", l_pos, l_pos);
    printf("smallest positive=%d \t\t (0x%08x)\n", s_pos, s_pos);
    printf("\n");

    printf("largest negative=%d \t\t (0x%08x)\n", l_neg, l_neg);
    printf("smallest negative=%d \t (0x%08x)\n", s_neg, s_neg);
    printf("\n");
}