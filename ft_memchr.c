/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:32:51 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 11:35:59 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memchr(const void *s, int c, size_t n)
{
    size_t  i = 0;

    while (i < n)
    {
        if (s[i] == c)
            return (s + i);
        i++;
    }
    return (NULL);
}