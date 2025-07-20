/*unsigned.c*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  int s_neg = 0x80000000;
  int l_neg = 0xffffffff;

  printf("(unsigned) largest negative  =%u \t\t(0x%08x)\n",l_neg,l_neg);
  printf("(unsigned)  largest negative-1=%u \t\t(0x%08x)\n",l_neg-1,l_neg-1);
  printf("(unsigned) largest negative-2=%u \t\t(0x%08x)\n",l_neg-2,l_neg-2);
  printf("(unsigned) largest negative-3=%u \t\t(0x%08x)\n",l_neg-3,l_neg-3);
  printf("...\n");
  printf("(unsigned) smallest negative+3=%u (0x%08x)\n",s_neg+3,s_neg+3);
  printf("(unsigned) smallest negative+2=%u (0x%08x)\n",s_neg+2,s_neg+2);
  printf("(unsigned) smallest negative+1=%u (0x%08x)\n",s_neg+1,s_neg+1);
  printf("(unsigned) smallest negative  =%u (0x%08x)\n",s_neg,s_neg);

}