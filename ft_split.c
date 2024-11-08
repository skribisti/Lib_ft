/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:29:14 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 09:58:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_issep(char a, char sep)
{
    if (a == sep)
        return (1);
    return (0);
}

char    *ft_strndup(char *str, int  n)
{
    char    *tab;
    int     i;

    tab = (char *)malloc(ft_strlen(str) + 1);
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

int ft_countwords(char const *s, char c)
{
    int cpt;
    int i;

    cpt = 0;
    i = 0;
    while(s[i])
    {
        if(!ft_issep(s[i], c) && ft_issep(s[i + 1], c) && s[i + 1])
            cpt++;
        i++;
    }
    return (cpt);
}

char **ft_split(char const *s, char c)
{
    int     d;
    int     f;
    char    **res;
    int     l;

    res = (char **)malloc(ft_countwords(s, c));
    if (!res)
        return (NULL);
    d = 0;
    l = 0;
    while(s[d] && s[f])
    {
        while(ft_issep(s[d], c) && s[d])
            d++;
        f = d;
        while(!ft_issep(s[f], c) && s[f])
            f++;
        if (s[f])
            res[l] = ft_strndup((char *)s + d, f - d);
        l++;
        d = f;
    }
    return (res);
}

/*
int		main()
{
 	char **arr;
 	char *phrase = "allo ya dla merd dans ltuyau";
 	arr = ft_split(phrase, ' ');
 	printf("%s\n", arr[0]);
 	printf("%s\n", arr[1]);
 	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
	printf("%s\n", arr[4]);
	printf("%s\n", arr[5]);
}*/