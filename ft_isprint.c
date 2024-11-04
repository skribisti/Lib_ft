#include <ctype.h>

int ft_isprint(int c)
{
    if (' ' <= c && c <= '~')
        return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int c = 'y';
    printf("Og func : %d \n", isprint(c));
    printf("My func : %d", ft_isprint(c));
}*