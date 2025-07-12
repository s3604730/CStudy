#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int i, j, c, state = OUT, count = 0, white = 0;
    int wordLength[10];
    for (i = 0; i < 10; ++i)
        wordLength[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++white;
            ++wordLength[count];
            count = 0;
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
        }
        else if (state == IN)
            ++count;
    }

    for (i = 0; i < 10; ++i)
        printf("%d, ", wordLength[i]);

    printf("\nword length 0 = ");
    for (i = 0; i < white; ++i)
        putchar('*');
    putchar('\n');

    for (i = 0; i < 10; i++)
    {
        printf("word lenght %d = ", i + 1);
        for (j = 0; j < wordLength[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
