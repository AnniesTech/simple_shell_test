#include "main.h"

/**
 * _strlen - Function that returns the lenght of a string.
 * @n: String
 * Return: the result
 */

int _strlen(char *n)
{
	int i = 0;

	while (n[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - Function that returns the duplicate of a string
 * @str: string
 * Return: the result
 */

char *_strdup(char *str)
{
	int len = _strlen(str), i;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (i = 0; i < len + 1; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}

/**
 * grid_size - Checks for the size of the grid
 * @grid: grid
 * Return: the result
 */

int grid_size(char **grid)
{
	int i = 0;

	while (grid[i])
	{
		i++;
	}
	return (i);
}

/**
 * free_grid - Frees the space on memory for the grid
 * @grid: grid
 */

void free_grid(char **grid)
{
	int i;

	for (i = 0; grid[i] != NULL; i++)
		free(grid[i]);
	free(grid);
}
