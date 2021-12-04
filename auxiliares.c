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
 * _strncmp - Function to compares two strings and n bytes.
 * @s1: String one
 * @s2: String two
 * Return: the subtraction of the strings.
 */

int _strncmp(char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strcmp - Function to compares two strings.
 * @s1: String one
 * @s2: String two
 * Return: the subtraction of the strings.
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
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
