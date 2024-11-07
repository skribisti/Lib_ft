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
    printf("len = %d\n", (int)len);
    while (big[i])
    {
        j = 0;
        while (big[i + j] == little[j] && j < len - 1 && j < ft_strlen(little))
        {
            printf("big[i + j] = %c\n", (char)big[i + j]);
            printf("little[j] = %c\n", (char)little[i]);
            printf("j = %d\n", (int)j);
            
            if (j == ft_strlen(little))
                return ((char *)big + i);
            j++;
        }
        i++;
    }
    return (NULL);
}
/*
int main()
{
    char    *big = "123456789";
    char    *little = "9";
    size_t  len = 8;

    printf("My func : %s", ft_strnstr(big, little, len));
    return (0);
}*/