/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:15:10 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/04 16:19:15 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 11;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d mod %d", a, b, div, mod);
	return (0);
}