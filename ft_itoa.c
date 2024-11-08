/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:22 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 12:43:26 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	nb;
	char	*str;
	int		is_negative;

	size = count_size((long) n);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	nb = (long) n;
	is_negative = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
		is_negative = 1;
	}
	str[size] = '\0';
	while (size > (size_t) is_negative)
	{
		str[size - 1] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}
/*
size_t  ft_countsize(long nb)
{
    size_t  s;
    
    s = 0;
    if (nb <= 0)
    {
        nb = -nb;
        s++;
    }
    while(nb)
    {
        nb = nb / 10;
        s++;
    }
    printf("s = %zu\n", s);
    return (s);
}

char *ft_itoa(int n)
{
    char    *str;
    size_t  size;
    long    nb;

    nb = (size_t)n;
    size = ft_countsize(nb);
    str = (char *)malloc(size + 1);
    if (!nb)
    {
        str[0] = '0';
        return (str);
    }
    if (!str)
        return (NULL);
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    str[size] = '\0';
    while(nb)
    {
        str[--size] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (str);
}

int main(void)
{
    int a = 0;
    printf("My func : %s", ft_itoa(a));
}*/