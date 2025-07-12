#include <stdio.h>
#include <math.h>

int main(void)
{
	float a,b,c;
	printf("Enter the value of variable \'A\': ");
	scanf("%f", &a);
	printf("Enter the value of variable \'B\': ");
	scanf("%f", &b);
	printf("Enter the value of variable \'C\': ");
	scanf("%f", &c);

	float solution1, solution2;
	solution1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
	solution2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);


	if (((a*(solution1*solution1)) + (b*solution1) +c) == 0 )
	{
		printf("the solution using the '+' operator is: %f\n", solution1);
	}
	else
	{
		printf("The solution using the '+' operator is: %f, but you might want to double check that... \n", solution1);
	}

	if (((a*(solution2*solution2)) + (b*solution2) +c ) ==0)
	{
		printf("[The solution using the '-' operator is: %f", solution2);
	}
	else
	{
		printf("The solution using the '-' operator is: %f, but you might want to double check that... \n", solution2);
	}
	return 0;
}

