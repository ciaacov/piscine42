/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:02:12 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/12 19:02:34 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

void print_name(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		put_char(c[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		print_name(av[0]);
		put_char('\n');
	}
	return (0);
}