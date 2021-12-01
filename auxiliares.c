#include "main.h"

int _strlen(char *n)
{
    int i = 0;

    while (n[i])
    {
        i++;
    }
    return (i);
}
