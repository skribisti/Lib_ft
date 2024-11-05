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

#include <libft.h>

char    *ft_strchr(char *str, char  c)
{
    int i;

    i = 0;
    while (str[i] != c)
        i++;
    if (str[i] == c)
        return (&str[i]);
    return (NULL);
}
/*
int main(void)
{
    char    *str = "Helo";
    char    c = 'e';
    printf("Og func : %p\n", strchr(str, c));
    printf("My func : %p\n", ft_strchr(str, c));
    return 0;
}*/