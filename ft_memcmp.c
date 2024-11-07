/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:39:32 by norabino          #+#    #+#             */
/*   Updated: 2024/11/07 11:54:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
    char    *str1 = (char *)s1;
    char    *str2 = (char *)s2;

	i = 0;
	while ((str1[i] == str2[i]) && (str1[i]) && (str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}