/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:22 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 14:02:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_countsize(long nb)
{
    size_t  s;
    
    s = 0;
    if (nb <= 0)
    {
        nb = -nb;
        s++;
    }
    
    while(nb)
    {
        printf("hey = %ld\n", s);
        nb = nb / 10;
        s++;
    }
    //printf("s = %zu\n", s);
    return (s);
}

char *ft_itoa(int n)
{
    char    *str;
    size_t  size;
    long    nb;

    nb = (size_t)n;
    size = ft_countsize(nb);
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return (NULL);
    /*if (nb == 0)
    {
        str[0] = '0';
        return (str);
    }*/
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    printf("%ld\n", size);
    str[size] = '\0';
    while(nb)
    {
        str[--size] = nb % 10 + '0';
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