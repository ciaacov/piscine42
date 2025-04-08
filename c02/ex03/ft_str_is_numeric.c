/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:37:34 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/06 21:54:17 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	int n;
	char *strg;

	strg = "0123456789";
	n = ft_str_is_numeric(strg);
	printf("%d\n", n);
	return (0);
}