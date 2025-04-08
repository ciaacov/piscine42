/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:52:13 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/08 16:28:53 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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

	strg = "SUPER";
	n = ft_str_is_uppercase(strg);
	printf("%d\n", n);
	return (0);
}