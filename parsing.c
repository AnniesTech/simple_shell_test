#include "main.h"
/**
 * token_1 - Function that tokenize the user string.
 * @str: user string.
 * Return: the split of the string.
 */
char **token_1(char *str, char *delim)
{
	unsigned int wc = 0, pos = 0;
	char **split = NULL;

	wc = word_counter(str, delim);
	printf("%d\n", wc);
	split = malloc(sizeof(char *) * (wc + 1));
	if (split == NULL)
	{
		/*free(str);
		free(split);*/
		/*exit(EXIT_FAILURE);*/
		perror("Memory error in the parsing process\n");
		return(NULL);
	}

	split[pos] = strtok(str, delim);
	pos++;

	while (pos < wc)
	{
		split[pos] = strtok(NULL, delim);
		pos++;
	}
	split[pos] = NULL;
	return (split);
}
