#include "main.h"
void prompt(void)
{
    char *string = "DANA# ", *str = NULL, **args = NULL;
    size_t len = 0;
    int status;

    /* Loop infinito */
    while (1)
    {
        /* obtener la línea */
        write(STDOUT_FILENO, string, _strlen(string));
        str = read_line();
        args = token_1(str);
        status = executable(args);
        
    }
}
