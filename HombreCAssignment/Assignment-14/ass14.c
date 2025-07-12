#include <stdio.h>

int main(void)
{
	int number = 21;
	int *ptr = &number;
	printf("the value of our pointer is: %p\n", ptr);

	return 0;
}

