/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:06:26 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:06:26 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main()
{
    char str1[] = "epadnshsa";
    char str2[] = "aadasdsad";

    printf("%d", ft_strcmp(str1, str2));
    return 0;
}
*/