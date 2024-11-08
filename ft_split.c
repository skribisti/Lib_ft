/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:29:14 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 11:24:45 by norabino         ###   ########.fr       */
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

    //printf("n = %d\n", n);
    tab = (char *)malloc(ft_strlen(str) + 1);
    //printf("len tab = %zu\n", ft_strlen(tab));
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
        if((!ft_issep(s[i], c) && ft_issep(s[i + 1], c)) || !s[i + 1])
            cpt++;
        i++;
    }
    //printf("cpt words : %d\n", cpt);
    return (cpt);
}

char **ft_split(char const *s, char c)
{
    int     d;
    int     f;
    char    **res;
    int     l;

    if (!s)
    return (NULL);
    res = (char **)malloc(ft_countwords(s, c) + 1);
    if (!res)
        return (NULL);
    d = 0;
    l = 0;
    f = 0;
    while(s[d])
    {
        while(ft_issep(s[d], c) && s[d])
            d++;
        //printf("d = %d\n", d);
        f = d;
        while(!ft_issep(s[f], c) && s[f])
            f++;
        //printf("f = %d\n", f);
        if (s[d])
            res[l] = ft_strndup((char *)s + d, f - d);
        //printf("res[l] = %s\n", res[l]);
        l++;
        d = f;
    }
    res[l] = 0;
    return (res);
}
/*
int		main()
{
 	char **arr;
 	char *phrase = "olol";
 	arr = ft_split(phrase, ' ');
    int i = 0;
    while(arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
}*/