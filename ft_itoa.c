/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:22 by norabino          #+#    #+#             */
/*   Updated: 2024/11/12 15:24:12 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countsize(long nb)
{
	size_t	s;

	s = 0;
	if (nb <= 0)
	{
		nb = -nb;
		s++;
	}
	while (nb)
	{
		nb = nb / 10;
		s++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	nb;

	nb = (long)n;
	if (nb == 0)
		return (ft_strdup("0"));
	size = ft_countsize(nb);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[size] = '\0';
	while (nb)
	{
		str[--size] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
/*
int main(void)
{
    int a = 0;
    printf("My func : %s", ft_itoa(a));
}*/