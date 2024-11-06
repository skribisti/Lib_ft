/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:07:02 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 10:07:02 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
    char *str1 = "\200";
    char *str2 = "\0";
	int	i = 0;

	while (str1[i])
	{
		printf("%c\n", str1[i]);
		i++;
	}
	printf("Og func :%d\n", strncmp(str1, str2, 1));
    printf("My func :%d", ft_strncmp(str1, str2, 1));
    return 0;
}
*/