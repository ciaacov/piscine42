/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:15:10 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/04 16:19:15 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

void ft_putnbr(int n)
{
    char c;
    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    int a = 10;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    ft_putnbr(a);
    write(1, " / ", 3);
    ft_putnbr(b);
    write(1, " = ", 3);
    ft_putnbr(div);
    write(1, " mod ", 5);
    ft_putnbr(mod);
    write(1, "\n", 1);
    return (0);
}