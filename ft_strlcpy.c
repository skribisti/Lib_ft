/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:42:42 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 12:53:02 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
    
	i = 0;
    if (!dst || !src)
        return (0);
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
    if (size > 0)
    {
	    dst[i] = '\0';
        i++;
    }
	return (ft_strlen(src));
}