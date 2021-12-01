#include "main.h"
char **prompt(void)
{
    char *string = "DANA# ", *str = NULL, **split_word = NULL;
    size_t len = 0;
    int caracteres;

    /* Loop infinito */
    while (1)
    {
        /* obtener la línea */
        write(STDOUT_FILENO, string, _strlen(string));
        caracteres = getline(&str, &len, stdin);
        /* write(STDIN_FILENO, str, caracteres);*/
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
        split_word = token_1(str);
        free(str);
        executable(split_word);
        
    }
    return (split_word);
}
