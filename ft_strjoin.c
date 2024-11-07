/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:56:01 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 17:01:18 by norabino         ###   ########.fr       */
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
    i = 1;
    while(s1[i++])
        res[i] = s1[i]
    j = i;
    while (s2[j++])
        res[j] = s2[j];
    return (res);
}