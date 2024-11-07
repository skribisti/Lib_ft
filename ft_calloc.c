/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:41:00 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 15:49:23 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    if (nmemb == 0)
        return (0);
    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
        return (0);
    ft_bzero(ptr, nmemb);
    return (ptr);
}