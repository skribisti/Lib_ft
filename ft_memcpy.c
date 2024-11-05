/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:05:28 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 14:04:57 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    if (src == 0 || n != 0)
    {
        if (dest == 0)
            return (NULL);
    }
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}
/*
int main ()
{
   //printf("Og func = %s\n", memcpy("            ", ((void*)0), 17));
   printf("My func = %s\n", ft_memcpy("            ", ((void*)0), 17));

   return(0);
}*/