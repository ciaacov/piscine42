/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:11:23 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/08 17:00:15 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char stri[] = "aaaaaAAAAAbbbbbBBBBB";

	ft_strupcase(stri);
	return (0);
}