#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int lower, upper;
	lower=1;
	upper =2;
	srand(time(0));

	int count;
	printf("How many times would you loke to flip the coin? ");
	scanf("%d", &count);


	int i, result;
	int heads = 0;
	int tails = 0;
	for(i=0; i<count; i++)
	{
		result = (rand() % (upper-lower+1)) +lower;
		if(result ==1)
		{
			heads++;
		}
		else if(result ==2)
		{
			tails++;
		}
	}
	printf("After flipping the coin %d times, the results were\n%d heads \n%dtails \n", count, heads, tails);
}

