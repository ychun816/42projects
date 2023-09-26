/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:23:17 by ylin              #+#    #+#             */
/*   Updated: 2023/07/02 15:30:03 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
    int m;
    int n;
    ft_div_mod(40, 9, &m, &n);
    printf("div: %i, mod: %i", m, n);
    return 0;
}
===================with AC/AV=======

#include <stdlib.h>
int main(int ac, char *av[])
{
    int j;
    int k;

    if (ac == 3)
    {
        ft_div_mod(atoi(av[1]), atoi(av[2]), &j, &k);
        printf("div: %i, mod: %i", j, k);
        return 0;
    }
}
*/