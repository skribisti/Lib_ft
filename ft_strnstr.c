/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:07:46 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:07:46 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t      i;
    size_t      j;   

    i = 0;
    j = 0;
    if (little[0] == '\0' || len == 0)
    {
        if (big[0] == '\0')
            return ("");
        return ((char *)big);
    }
    //printf("len = %d\n", (int)len);
    while (big[i] && j < ft_strlen(little))
    {
        j = 0;
        while (big[i + j] == little[j] && j < len - 1 )
        {
            //printf("i = %d\n", (int)i);
            //printf("j = %d\n\n", (int)j);
            //printf("big[i + j] = %c\n", (char)big[i + j]);
            //printf("little[j] = %c\n\n\n", (char)little[j]);
            j++;
            if (j == ft_strlen(little))
                return ((char *)big + i);
            
        }
        i++;
    }
    return (NULL);
}
/*
int main()
{
    char    *big = "see FF your FF return FF now FF";
    char    *little = "FF";
    size_t  len = ft_strlen(big);

    printf("My func : %s", ft_strnstr(big, little, len));
    return (0);
}*/