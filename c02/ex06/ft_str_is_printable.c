/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:01:21 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/08 16:39:06 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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

int main(void)
{
	char *strg = "sup\ter";
	printf("%d\n", ft_str_is_printable(strg));
	return (0);
}