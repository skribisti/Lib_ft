/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:09:03 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 17:19:57 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_len(char const *s1, char const *set, size_t  length)
{
    return (ft_strlen(s1) - 2 * length);   
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *res;
    size_t  total_len;
    size_t  length;
    int     i;

    length = ft_strlen(set);
    total_len = ft_len(s1, set, length);
    res = malloc(total_len);
    if (!res)
        return(NULL);
    i = 0;
    while (res[i])
    {
        res[i] = s1[i + length];
        i++;
    }
    return (res);
}