/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:39:32 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 12:34:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) 
    && (i < n))
		i++;
    if (i < n)
	    return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
    return (0);
}
/*
int main(void)
{
    char    *s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
    char    *s2 = "\xff\0\0\xaa\0\xde\x00MBS";
    size_t  n = 9;
    printf("My func : %d\n", ft_memcmp(s1, s2, n));
    return 0;
}*/