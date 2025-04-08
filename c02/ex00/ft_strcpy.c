/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:20:39 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/08 20:21:32 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char frase[] = "Agora Vai!!!";
	char destino[50] = "texto teste";

	ft_strcpy(destino, frase);
	printf("frase é: %s\n", frase);
	printf("Destino é: %s\n", destino);
	return (0);
}