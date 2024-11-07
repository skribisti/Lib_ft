/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:40 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 16:18:39 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	orig_dstlen;
	size_t	total_len;
	size_t	i;
	size_t	j;

	total_len = ft_strlen(src);
	if (dstsize != 0)
	{
		orig_dstlen = ft_strlen(dst);
		dstsize -= 1;
		i = orig_dstlen;
		j = 0;
		while (i < dstsize && src[j])
			dst[i++] = src[j++];
		if (dstsize + 1 > orig_dstlen)
		{
			dst[i] = '\0';
			total_len += orig_dstlen;
		}
		else
			total_len += dstsize + 1;
	}
	return (total_len);
}



