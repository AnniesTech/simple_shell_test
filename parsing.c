#include "main.h"
/**
 * token_1 - Function that tokenize the user string.
 * @str: user string.
 * Return: the split of the string.
 */
char **token_1(char *str)
{
	unsigned int wc, pos = 0;
	char **split = NULL;


	wc = word_counter(str);
	printf("%d\n", wc);
	split =  malloc(sizeof(char *) * (wc + 2));

	if (split == NULL)
		{
			free_grid(split);
			exit(EXIT_FAILURE);
		}

	split[pos] = strtok(str, " \n\t");
	pos++;

	while (pos < wc)
	{
		split[pos] = strtok(NULL, " \n\t");
		pos++;
	}
	split[pos] = NULL;
	return (split);
}
