/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:05:28 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 13:45:37 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
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
   const char *src = ((void *)0);
   char *dest = ((void *)0);
   
   memcpy(dest, src, 3);
   printf("Og func = %s\n", dest);

   dest = ((void *)0);
   ft_memcpy(dest, src, 3);
   printf("My func = %s\n", dest);

   return(0);
}*/