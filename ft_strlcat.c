/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:13:40 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 16:17:52 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	cur;

	src_len = ft_strlen(dst);
	cur = 0;
	if (dstsize <= src_len)
		return (ft_strlen(src) + dstsize);
	while (src[cur] && (src_len + cur) < (dstsize - 1))
	{
		dst[src_len + cur] = src[cur];
		cur++;
	}
	dst[src_len + cur] = 0;
	return (ft_strlen(src) + src_len);
}



