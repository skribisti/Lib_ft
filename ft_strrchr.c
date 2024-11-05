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

    i = ft_strlen(str);
    while (str[i] != c)
        i--;
    if (str[i] == c)
        return ((char *)&str[i]);
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