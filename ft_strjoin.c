/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:56:01 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 17:07:43 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  total_size;
    char    *res;
    size_t  i;
    size_t  j;

    total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
    res = (char *)malloc(total_size);
    if (!res)
        return (NULL);
    i = 0;
    while(s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        res[i] = s2[j];
        i++;
        j++;
    }
    res[i] = 0;
    return (res);
}