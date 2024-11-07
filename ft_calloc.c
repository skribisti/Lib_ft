/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:41:00 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 16:11:48 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *str;
    size_t  i;
    
    str = malloc(nmemb * size);
    if (!str)
        return (NULL);
    i = 0;
    while (i < nmemb * size)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}

/*
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
}*/