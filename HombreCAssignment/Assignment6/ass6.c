#include <stdio.h>


int main(void)
{
	int numerator, denominator;
	printf("Enter a numerator: ");
	scanf("%d", &numerator);
	printf("Enter a denominator: ");
	scanf("%d", &denominator);

	if(numerator & denominator == 0)
	{
		printf("There is NOT a remainder!");
	}
	else
	{
		printf("There is a remainder!");
	}

	return 0;
}

