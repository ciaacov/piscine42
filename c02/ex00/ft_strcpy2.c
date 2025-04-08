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
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(void)
{
    char frase[] = "Agora Vai!!!";
    char destino[50];

    ft_strcpy(destino, frase);

    write(1, "frase: ", 9);
    ft_putstr(frase);
    write(1, "\n", 1);

    write(1, "Destino: ", 11);
    ft_putstr(destino);
    write(1, "\n", 1);
    return (0);
}
