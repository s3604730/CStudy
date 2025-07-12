#include <stdio.h>

int main(void)
{	

	int variable=15;
	int *ptr = &variable;

	printf("The value of int variable is %d\n", variable);

	printf("The value of the pointer to the int variable is %d\n", ptr);

	printf("The memory address of the int variable is:%d\n", &variable);
	printf("the value held at the memory location that the pointer is pointing to is: %d\n", *ptr);

return 0;
}

