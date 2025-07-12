#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define INITIAL_CAPACITY 3

int main(void) 
{
	char answer[] = "y";

	double *scores = malloc(INITIAL_CAPACITY * sizeof(double));
	if(!scores)
	{
		fprintf(stderr, "Failed to allocate scores array.\n");
		return 1;
	}


	int capacity = INITIAL_CAPACITY;


	int numScores;


	for(numScores = 0; strcmp(answer,"y") ==0; ++numScores)
	{
		if(numScores == capacity)
		{
			capacity *=2;
			scores = realloc(scores, capacity * sizeof(double));
			if(!scores)
			{
				fprintf(stderr, "Failed to reallocate scores array.\n");
				return 1;
			}
		}
		printf("Enter a test score: ");
		scanf("%lf", &scores[numScores]);

		printf("Would you like to continue? y/n ");
		scanf("%s", &answer);

	}
	double sum = 0;


	for (int loop =0; loop<numScores; loop++)
	{
		sum +=scores[loop];
	}

	printf("%.2f is the average.\n", sum /numScores);

	free(scores);


	return 0;
}
	
