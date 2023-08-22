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
int     main()
{
        int     a,b,d,m;

        a = 10;
        b = 5;
        ft_div_mod(a, b, &d, &m);
        printf("%i %i %i %i", a, b, d, m);
}
*/