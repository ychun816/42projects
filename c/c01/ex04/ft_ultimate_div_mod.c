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
#include <stdio.h>
int main()
{
    int d;
    int m;

    d = 10;
    m = 5;
    ft_ultimate_div_mod(&d, &m);
    printf("div: %i, mod: %i", d, m);
}

===================AC/AV======
#include <stdlib.h>
int main(int ac, char *av[])
{
    int d;
    int m;

    d = atoi(av[1]);
    m = atoi(av[2]);
    
    if (ac > 0)
    {
        ft_ultimate_div_mod(&d, &m);
        printf("div: %i, mod: %i", d, m);
    }
}
*/