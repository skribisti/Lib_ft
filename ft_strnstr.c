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
    while (big[i] && j < ft_strlen(little))
    {
        j = 0;
        //printf("i = %d\n", (int)i);
        while (big[i + j] == little[j] && i < len
        && i + j < len)
        {
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
    char    *big = "MZIRIBMZIRIBMZE123";
    char    *little = "MZIRIBMZE";
    size_t  len = 9;

    printf("My func : %s", ft_strnstr(big, little, len));
    return (0);
}*/