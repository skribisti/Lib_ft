/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:22 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 11:49:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_countsize(long nb)
{
    size_t  s;

    if (nb < 0)
        nb = -nb;
    if (nb == 0)
        s = 0;
    while(nb)
    {
        nb = nb / 10;
        s++;
    }
    return (s);
}

char *ft_itoa(int n)
{
    char    *str;
    size_t  size;
    size_t  is_neg;
    int     i;
    int     end;

    size = ft_countsize((long)n);
    str = (char *)malloc(size + 1);
    if (!str)
        return (NULL);
    is_neg = 0;
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
        is_neg = 1;
    }
    str[size] = 0;
    if (is_neg)
        end = 1;
    else
        end = 0;
    i = 0;
    while(i > end)
    {
        str[size] = n % 10 + '0';
        n = n / 10;
        i--;
    }
    return (str);
}