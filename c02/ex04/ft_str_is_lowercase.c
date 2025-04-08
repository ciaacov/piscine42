/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:54:44 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/06 22:20:21 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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

	strg = "abcdefghi";
	n = ft_str_is_lowercase(strg);
	printf("%d\n", n);
	return (0);
}