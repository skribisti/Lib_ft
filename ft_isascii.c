/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:29:28 by norabino          #+#    #+#             */
/*   Updated: 2024/11/04 17:29:31 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_isascii(int c)
{
    if (c >= '\0' && c <= 127)
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main(void)
{
    int    c = 30;
    printf("Og func : %d \n", isascii(c));
    printf("My func : %d", ft_isascii(c));
}*/
