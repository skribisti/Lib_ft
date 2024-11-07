/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:40 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 16:14:51 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t d;
	size_t s;

	i = ft_strlen(dst);
	j = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize < 1)
		return (s + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < d)
		return (s + dstsize);
	else
		return (d + s);
}



