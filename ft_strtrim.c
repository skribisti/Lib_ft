/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:09:03 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 17:34:35 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_len(char const *s1, size_t  lset)
{
    return (ft_strlen(s1) - 2 * lset);   
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *res;
    size_t  total_len;
    size_t  lset;
    int     i;

    lset = ft_strlen(set);
    total_len = ft_len(s1, lset) + 1;
    res = malloc(total_len);
    if (!res)
        return(NULL);
    i = 0;
    while (res[i])
    {
        res[i] = s1[i + lset];
        i++;
    }
    res[i] = 0;
    return (res);
}
/*
int main(void)
{
    char    *str1 = "Hello   Please Trim me !H";
    printf("%s", ft_strtrim(str1, "H"));
    return (0);
}*/