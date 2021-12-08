#include "main.h"

/**
 * check_path - Checks the path
 * @args: arguments passed
 * Return: The executable using the arguments
 */

int check_path(char **args)
{
	int index = 0;

	while (args[index])
	{
		if (args[index] == "/")
		{
			return (executable(args));
		}
		else
		{
			concat_path((get_path(args)), args);
		}
	}
}
