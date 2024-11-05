/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:06:17 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:06:17 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int  c)
{
    int i;

    i = 0;
    while (str[i] != c)
        i++;
    if (str[i] == c)
        return ((char *)&str[i]);
    return (NULL);
}
/*
int main(void)
{
    char    *str = "Helo";
    int    c = 'e';
    printf("Og func : %s\n", strchr(str, c));
    printf("My func : %s\n", ft_strchr(str, c));
    return 0;
}*/