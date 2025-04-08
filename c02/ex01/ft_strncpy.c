/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:23:25 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/06 20:32:58 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>*/

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char destM[10];
	char srcM[] = "ico";

	printf("New string: %s\n", ft_strncpy(destM, srcM, 9));
	return (0);
}