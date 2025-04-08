/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:29:02 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/06 21:34:04 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
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
    char str1[] = "HelLo";
    char str2[] = "Hello123";

    write(1, "Result 1: ", 10);
    ft_putnbr(ft_str_is_alpha(str1));
    write(1, "\n", 1);

    write(1, "Result 2: ", 10);
    ft_putnbr(ft_str_is_alpha(str2));
    write(1, "\n", 1);
    return (0);
}