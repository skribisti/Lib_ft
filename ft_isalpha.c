/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:39:17 by norabino          #+#    #+#             */
/*   Updated: 2024/11/04 14:25:40 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isalpha(char	*str)
{
	int		i;
	char	c;

	if (ft_strlen(str) == 0)
		return (1);
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
			i++;
		else
			return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalpha("allo"));
	printf("%d", ft_isalpha("dadw4"));
}*/
