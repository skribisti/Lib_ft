/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:09:44 by norabino          #+#    #+#             */
/*   Updated: 2024/11/08 15:15:59 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    z;

    z = '0';
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if (n < 0)
    {
        n = -n;
        ft_putchar_fd('-', fd);
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    z = z + n % 10;
    ft_putchar_fd(z, fd);
}