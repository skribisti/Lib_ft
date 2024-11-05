/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:34:40 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 11:52:38 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d \n", ft_isdigit(52));
	printf("%d", ft_isdigit(48));
}*/
