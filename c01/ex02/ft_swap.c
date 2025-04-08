/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:11:17 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/04 16:17:50 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
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
    int x = 42;
    int y = 24;

    ft_putnbr(x);
    ft_putnbr(y);
    ft_swap(&x, &y);
    ft_putnbr(x);
    ft_putnbr(y);
    return (0);
}