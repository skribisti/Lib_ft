#include <stdlib.h>

char    *ft_strdup(char *str)
{
    char    *tab;
    int     i;

    tab = (char *)malloc(ft_strlen(str) + 1);
    i = 0;
    while (str[i])
    {
        tab[i] = str[i];
        i++;
    }
    tab[i] = 0;
    return (tab);
}