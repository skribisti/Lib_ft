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

#include <libf.h>

int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strrchr(char *str, char  c)
{
    int i;

    i = ft_strlen(str);
    while (str[i] != c)
        i--;
    if (str[i] == c)
        return (&str[i]);
    return (NULL);
}
/*
int main(void)
{
    char    *str = "Helo";
    char    c = 'a';
    printf("Og func : %p\n", strrchr(str, c));
    printf("My func : %p\n", ft_strrchr(str, c));
    return 0;
}*/