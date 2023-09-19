/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:35:49 by ylin              #+#    #+#             */
/*   Updated: 2023/07/02 15:30:52 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
/*
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
=================
#include <stdio.h>
int     main()
{
        int d,m;

        d = 1;
        m = 2;
        ft_ultimate_div_mod(&d, &m);
        printf("%i %i", d, m);
}
===AC/AV===
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int m, n, di, mo;

    m = atoi(av[1]);
    n = atoi(av[2]);
    if (ac > 0)
    {
        ft_ultimate_div_mod(&m, &n);
        printf("%i %i", m, n);
    }
}
*/