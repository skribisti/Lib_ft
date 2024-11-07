/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:11:14 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 11:25:48 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    //if (src > dest)
    return (ft_memcpy(dest, src, n));
    /*
    char    *d;
    char    *s;
    
    if (src == 0 && n != 0 && dest == 0)
        return (NULL);
    d = (char *)dest;
    s = (char *)src;
    while (n--)
        d[n] = s[n];
    return (dest);
    */
}

