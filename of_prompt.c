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
	/*int status;*/

	/* Loop infinito */
	while (1)
	{
		/* obtener la línea */
		write(STDOUT_FILENO, string, _strlen(string));
		str = read_line();
		args = token_1(str);
		while (args[pos])
		{
			printf("%s\n", args[pos]);
			pos++;
		}
		/*status = executable(args);*/
		free(str);
		free(args);
	}
}
