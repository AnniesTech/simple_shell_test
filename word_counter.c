#include <stdio.h>
#include <stdlib.h>
int word_counter(char *str)
{
    unsigned int wc;
    int estado = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            estado = 0;
        }
        else if (estado == 0)
        {
            estado = 1;
            ++wc;
        }
        ++str;
    }
    return (wc);
}
