/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:01:17 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/09 16:01:35 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

void print_param(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0')
	{
		put_char(av[i]);
		i++;
	}
	put_char('\n');
}

int main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = argc - 1;
		while (i != 0)
		{
			print_param(argv[i]);
			i--;
		}
	}
	return (0);
}
