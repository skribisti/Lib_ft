#include <bsd/string.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strnstr(char *str, char *to_find, size_t len)
{
    int    i;
    int     j;   

    i = 0;
    j = 0;
    if (to_find[0] == '\0' || len == 0)
    {
        if (str[i] == '\0')
            return ("");
        return (str);
    }
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && j < len)
        {
            j++;
            if (j == ft_strlen(to_find))
                return (&str[i]);
        }
        i++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    char    *str = argv[1];
    char    *to_find = argv[2];
    size_t  len = 2;
    
    (void)argc;
    printf("%s\n", str);
    printf("OG func :%s\n", strnstr(str, to_find, len));
    printf("My func :%s", ft_strnstr(str, to_find, len));
    return (0);
}