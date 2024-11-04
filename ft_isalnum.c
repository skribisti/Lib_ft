/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:56:21 by norabino          #+#    #+#             */
/*   Updated: 2024/11/04 15:12:33 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalnum(int	c)
{
	if ((c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z') 
			|| (c >= '0' && c <= '9'))
			return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	c = '1';
	printf("Og func : %d \n", isalnum(c));
	printf("My func : %d", ft_isalnum(c));
}
*/