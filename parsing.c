#include "main.h"
/**
 * token_1 - Function that tokenize the user string.
 * @str: user string. 
 * Return: the split of the string. 
 */
char **token_1(char *str)
{
    unsigned int wc = word_counter(str), pos = 0;
    char **split = malloc(sizeof(char *) * wc);

    if (split == NULL)
    {
        free(split);
        exit(EXIT_FAILURE);
    }
    split[pos] = _strdup(strtok(str, " \n\t"));
    pos++;

    while (pos < wc - 1)
    {
        split[pos] = _strdup(strtok(NULL, " \n\t"));
        pos++;
    }
    split[pos] = NULL;
    return (split);
}
