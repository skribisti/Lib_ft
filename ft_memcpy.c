/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:05:28 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:05:43 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
   const char src[50] = "Tutorialspoint";
   char dest[50];

   strcpy(dest,"Heloooo!!");
   memcpy(dest, src, strlen(src) + 1);
   printf("Og func = %s\n", dest);

   strcpy(dest,"Heloooo!!");
   ft_memcpy(dest, src, strlen(src) + 1);
   printf("My func = %s\n", dest);

   return(0);
}*/