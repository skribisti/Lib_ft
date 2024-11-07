/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:16:38 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 15:28:34 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_atoi(const char *nptr)
{
    int res;
    int sign;
    int i;
    char    *str;

    str = (char *)nptr;
    sign = 1;
    res = 0;
    while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}