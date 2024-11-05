/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:28:51 by norabino          #+#    #+#             */
/*   Updated: 2024/11/05 09:18:23 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    while(i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}
/*
int main(void)
{
    int tab[] = {54, 85, 20, 63, 21};
    ft_bzero(tab, 5);    
}*/