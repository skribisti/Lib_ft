/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:08:03 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:08:03 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int  c)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i] != c && str[i])
        i--;
    if (str[i] == c)
        return ((char *)&str[i]);
    return (NULL);
}
/*
int main(void)
{
    char    *str = "the cake is a lie !\0I'm hidden lol\r\n";
    int    c = 'e';
    printf("Og func : %s\n", strrchr(str, c));
    printf("My func : %s\n", ft_strrchr(str, c));
    return 0;
}*/