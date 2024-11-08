/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:20:52 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 09:26:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    
    if (start >= ft_strlen(s) || !s)
        return (NULL);
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (i < len && s[i])
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = 0;
    return (str);
}
/*
int main(void)
{
    char    *s = "01234";
    printf("%s", ft_substr(s, 10, 10));
}*/