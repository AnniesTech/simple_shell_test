#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int str_len(char *n)
{
	int len = 0;

	while (n[len])
	{
		len++;
	}
	return (len);
}
int main(void)
{
	char *string = "$ ";
	char *line;
	size_t len = 0;
	int caracteres = 0;


	while (1)
	{
		write(STDOUT_FILENO, string, str_len(string));
		caracteres = getline(&line, &len, stdin);
		write(STDOUT_FILENO, line, caracteres);
	}
	return (0);
}
