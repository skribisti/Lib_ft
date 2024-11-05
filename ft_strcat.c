/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:05:58 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:05:58 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strcat(char *dest, char *src, unsigned int nb)
{
    int i;
    
    i = 0;
    while (src[i] && i < nb)
    {
        dest[i + ft_strlen(dest)] = src[i];
        i++;
    }
    dest[i + ft_strlen(dest)] = 0;
    return (dest);
}