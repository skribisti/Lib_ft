/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:20:52 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 16:50:54 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    str = malloc(len);
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

int main(void)
{
    char    *s = "i just want to be part of yout symphonyyyyyyy :3";
    printf("%s", ft_substr(s, 5, 20));
}