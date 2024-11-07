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
        if (big[i] == '\0')
            return ("");
        return ((char *)big);
    }
    while (big[i])
    {
        j = 0;
        while (big[i + j] == little[j] && j < len)
        {
            j++;
            if (j == ft_strlen(little))
                return ((char *)&big[i]);
        }
        i++;
    }
    return (0);
}
/*
int main()
{
    char    *big = "";
    char    *little = "";
    size_t  len = 2;

    printf("%s\n", big);
    //printf("OG func :%d\n", strnstr(big, little, len));
    printf("My func :%s", ft_strnstr(big, little, len));
    return (0);
}*/