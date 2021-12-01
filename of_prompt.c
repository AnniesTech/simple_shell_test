#include "main.h"
void prompt(void)
{
    char *string = "# ", *str;
    size_t len = 0;
    int caracteres;

    /* Loop infinito */
    while (1)
    {
        /* obtener la línea */
        write(STDOUT_FILENO, string, _strlen(string));
        caracteres = getline(&str, &len, stdin);
        /* write(STDIN_FILENO, str, caracteres);*/
        if (getline(&str, &len, stdin) == -1)
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
    }
}