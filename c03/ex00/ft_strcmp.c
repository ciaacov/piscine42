/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:45:01 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/09 21:07:15 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}