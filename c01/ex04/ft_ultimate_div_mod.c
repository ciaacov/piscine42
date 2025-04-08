/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:54:00 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/04 16:19:55 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)

{
	int c;
	int d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

int main(void)
{
	int a;
	int b;

	a = 10;
	b = 2;
	printf("%d / %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div %d mod %d", a, b);
	return (0);
}