#include "main.h"
/**
 * token_2 - Function that tokenize the path.
 * @path: The path.
 * Return: 
 */
char **token_2(char *path)
{
    unsigned int wc = 0, pos = 0;
	char **split_path = NULL;

    wc = word_counter(path);
    split_path = malloc(sizeof(char *) * (wc + 1));
    if (split_path == NULL)
    {
        perror("Memory error in split path");
        return (NULL);
    }
    split_path[pos] = strtok(path, ":");
    pos++;

    while (pos < wc)
    {
        split_path[pos] = strtok(NULL, ":");
        pos++;
    }
    split_path[pos] = NULL;
    return(split_path);
}
