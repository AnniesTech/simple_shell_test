#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>
int main(void)
{
/*    char str[34] = "Este es un string para tokenizar.";
    char *p;

    p = strtok(str, " ");

    while (p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
    return (0);
    }*/
    char *string = "$ ", *str = NULL, *p;
    size_t len = 0, caracteres;

    while (1)
    {
	write(STDOUT_FILENO, string, strlen(string));
/* Read the line */
	caracteres = getline(&str, &len, stdin);
/* Tokenizar */
    p = strtok(str, " ");

        while (p)
        {
            printf("%s\n", p);
            p = strtok(NULL, " ");
        }
    }
    return (caracteres);
}