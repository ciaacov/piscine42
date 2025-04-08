/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciaacov- <ciaacov-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:09:47 by ciaacov-          #+#    #+#             */
/*   Updated: 2025/03/04 16:17:16 by ciaacov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int nbr0;
    int *nbr1;
    int **nbr2;
    int ***nbr3;
    int ****nbr4;
    int *****nbr5;
    int ******nbr6;
    int *******nbr7;
    int ********nbr8;
    int *********nbr;

    nbr0 = 0;

    nbr1 = &nbr0;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr = &nbr8;

    ft_ultimate_ft(nbr);
    printf("%d", nbr0);
    return (0);
}