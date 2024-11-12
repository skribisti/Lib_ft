/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:29:14 by norabino          #+#    #+#             */
/*   Updated: 2024/11/12 14:35:08 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char    *ft_strndup(char *str, int  n)
{
    char    *tab;
    int     i;

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
	int	cpt;
	int	in;

	i = 0;
	cpt = 0;
	in = 0;
	while (s[i])
	{
		if (s[i] != (char)c && in != 1)
		{
			in = 1;
			cpt++;
		}
		if (s[i] == (char)c && in == 1)
			in = 0;
		i++;
	}
	return (cpt);
}

char    **ft_split(char const *str, char c)
{
    char    **res;
    int     s;
    int     e;
    int     l;

    if (!str)
        return (NULL);
    res = (char **)malloc(sizeof(char *) * ft_countwords((char *)str, c) + 1);
    if (!res)
        return (NULL);
    s = 0;
    l = 0;
    while (str[s] && l < ft_countwords((char *)str, c))
    {
        while(str[s] == c && str[s])
            s++;
        e = s;
        while(str[e]!= c && str[e])
            e++;
        res[l] = ft_strndup((char *)str + s, e - s);
        l++;
        s = e;
    }
    res[l] = 0;
    return (res);
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