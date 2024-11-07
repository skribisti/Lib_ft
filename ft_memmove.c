/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:11:14 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 11:28:03 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    
    char    *d;
    char    *s;
    size_t  i = 0;
    
    if (src < dest)
        return (ft_memcpy(dest, src, n));
    
    if (src == 0 && n != 0 && dest == 0)
        return (NULL);
    
    d = (char *)dest;
    s = (char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

