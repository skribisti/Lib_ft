/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:08:19 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:08:19 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    if (to_find[0] == '\0')
    {
        if (str[i] == '\0')
            return ("");
        return (str);
    }
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            j++;
            if (j == ft_strlen(to_find))
                return (&str[i]);
        }
        i++;
    }
    return (0);
}
/*
int main(int argc, char *argv[])
{
    char    *str = argv[1];
    char    *to_find = argv[2];
    
    (void)argc;
    printf("%s\n", str);
    printf("OG func :%s\n", strstr(str, to_find));
    printf("My func :%s", ft_strstr(str, to_find));
    return (0);
}*/