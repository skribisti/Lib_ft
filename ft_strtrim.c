/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:09:03 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 14:25:43 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_incharset(int c, char *set)
{
    int i;

    while(set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;

    i = -1;
    j = ft_strlen(s1);
    
    while(s1[++i] && ft_incharset(s1[i], (char *)set));
    while(s1[--j] && ft_incharset(s1[j], (char *)set));
    return (ft_substr(s1, i , j - i));  
}

/*
int main(void)
{
    char    *str1 = "Hello   Please Trim me !H";
    printf("%s", ft_strtrim(str1, "H"));
    return (0);
}*/