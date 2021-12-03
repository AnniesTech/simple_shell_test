#include "main.h"
/**
 * prompt - Function with the infinite loop.
 * Return: void.
 */
void prompt(void)
{
	char *string = "DANA# ", *str = NULL, **args = NULL;
	size_t len = 0;
	int pos = 0, status = 0, mode = 0;
	ssize_t caracteres = 0;

	while (1)
	{
		/*mode = isatty(STDIN_FILENO);
		if (mode == 1)
		{*/
			write(STDOUT_FILENO, string, _strlen(string));
			/*str = read_line();*/
			caracteres = getline(&str, &len, stdin);
		if (caracteres == -1)
		{
			if (caracteres == EOF)
			{
				exit(EXIT_SUCCESS);
			}
			else
			{
				perror("No such file or directory\n");
				exit(EXIT_FAILURE);
			}
		}
			args = token_1(str);
			while (args[pos])
			{
				printf("%s\n", args[pos]);
				pos++;
			}
			/*status = executable(args);*/
			status = is_built_in(args);
			free_grid(args);
		
	}
}
