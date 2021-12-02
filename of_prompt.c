#include "main.h"
/**
 * prompt - Function whit the infinite loop.
 * Return: void.
 */
void prompt(void)
{
	char *string = "DANA# ", *str = NULL, **args = NULL;
	size_t len = 0;
	int pos = 0;
	int status;

	/* Loop infinito */
	while (1)
	{
		write(STDOUT_FILENO, string, _strlen(string));
		/* obtener la línea */
		str = read_line();
		/* obtener los argumentos */
		args = token_1(str);
		while (args[pos])
		{
			printf("%s\n", args[pos]);
			pos++;
		}
		/* ejecutar el proceso */
		status = executable(args);
		/* liberar la memoria */
		free(str);
		free(args);
	}
}
