/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:41:00 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 15:54:13 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
        return (0);
    ft_bzero(ptr, nmemb);
    return (ptr);
}

int main(void)
{
    int size = 8539;

	void * d1 = ft_calloc(size, sizeof(int));
	void * d2 = calloc(size, sizeof(int));
    if (memcmp(d1, d2, size * sizeof(int)))
        printf("non");
    else
        printf("oui");
    free(d1);
	free(d2);
    return (0);
}