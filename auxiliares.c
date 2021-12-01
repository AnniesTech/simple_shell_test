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

char *_strdup(char *str)
{
    int len = _strlen(str), i;
    char *dest;

    if (str == NULL)
    {
        return (NULL);
    }
    dest = malloc(sizeof(char) * (len + 1));
    if (dest == NULL)
    {
        free(dest);
        return (NULL);
    }
    for (i = 0; i < len + 1; i++)
    {
        dest[i] = str[i];
    }
    return (dest);
}

int grid_size(char **grid)
{
    int i = 0;

    while (*grid)
    {
        i++;
        grid++;
    }
    return (i);
}

void free_grid(char **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);
    free(grid);
}
