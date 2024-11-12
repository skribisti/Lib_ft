/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:29:14 by norabino          #+#    #+#             */
/*   Updated: 2024/11/12 16:41:44 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, int n)
{
	char	*tab;
	int		i;

	tab = (char *)malloc(n + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int	ft_countwords(char const *s, int c)
{
	int	i;
	int	j;
	int	in;

	i = 0;
	j = 0;
	in = 0;
	while (s[i])
	{
		if (s[i] != (char)c && in != 1)
		{
			in = 1;
			j++;
		}
		if (s[i] == (char)c && in == 1)
			in = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *str, char c)
{
	int		s;
	int		e;
	int		i;
	char	**dst;

	if (!str)
		return (NULL);
	dst = (char **)malloc(sizeof(char *) * (ft_countwords(str, (int)c) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	s = 0;
	while (str[s] && i < ft_countwords(str, (int)c))
	{
		while (str[s] == c && str[s])
			s++;
		e = s;
		while (str[e] != c && str[e])
			e++;
		dst[i] = ft_strndup((char *)str + s, e - s);
		s = e;
		i++;
	}
	dst[i] = 0;
	return (dst);
}
/*
int		main()
{
 	char **arr;
    
 	arr = ft_split("", 'z');
    int i = 0;
    while(arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
}*/