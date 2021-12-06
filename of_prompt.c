#include "main.h"
/**
 * prompt - Function with the infinite loop.
 * Return: void.
 */
void prompt(void)
{
	char *string = "DANA# ", *str = NULL, **args = NULL;
	size_t len = 0;
	int status = 0, mode = 0;
	ssize_t caracteres = 0;

	while (1)
	{
		write(STDOUT_FILENO, string, _strlen(string));
		str = read_line();
		args = token_1(str);
		status = is_built_in(args);
		if (status == -1)
		{
			/*free_grid(args);*/
			/* free(str); */
			return;
		}
		/*free(str);*/
		/*printf("%s\n", get_path());*/
		/* 		free_grid(args);*/
	}
}
