/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:22 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 13:56:09 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_countsize(long nb)
{
    size_t  s;
    
    s = 0;
    if (nb < 0)
    {
        nb = -nb;
        s++;
    }
    while(nb >  9)
    {
        nb = nb / 10;
        s++;
    }
    printf("s = %zu\n", s);
    return (s + 1);
}

char *ft_itoa(int n)
{
    char    *str;
    size_t  size;
    long    nb;

    nb = (size_t)n;
    size = 0;
    str = (char *)malloc(sizeof(char) * (ft_countsize(nb) + 1));
    if (!str)
        return (NULL);
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while(nb > 9)
    {
        str[ft_countsize(nb) - size - 1] = nb % 10 + '0';
        size++;
        nb = nb / 10;
    }
    return (str);
}
/*
int main(void)
{
    int a = 0;
    printf("My func : %s", ft_itoa(a));
}*/