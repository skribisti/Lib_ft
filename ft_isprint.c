/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:05:12 by norabino          #+#    #+#             */
/*   Updated: 2024/11/12 16:17:23 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}
/*
int main(void)
{
    int c = 'y';
    printf("Og func : %d \n", isprint(c));
    printf("My func : %d", ft_isprint(c));
}*/