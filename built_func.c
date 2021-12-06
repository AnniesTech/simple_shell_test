#include "main.h"

/**
 * our_exit - Function to exit the shell.
 * @args: the arguments.
 * Return: exit.
 */

int our_exit(char **args)
{
	/*free_grid(args);*/
	exit(EXIT_SUCCESS);
}

/**
 * our_env - Function to print the environment.
 * @args: the arguments.
 * Return: always 0.
 */

int our_env(char **args)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(*environ));
		i++;
	}
	return (0);
}

/**
 * _strcat - Concatenar dos strings.
 * @dest: destino del string.
 * @src: fuente del string.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	for (m = 0; dest[m] != '\0'; m++)
	{
		continue;
	}
	for (n = 0; src[n] != '\0'; m++, n++)
	{
		dest[m] = src[n];
	}
	return (dest);
}