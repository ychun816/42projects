/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:54:23 by ylin              #+#    #+#             */
/*   Updated: 2023/07/03 11:45:08 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/* 
#include <stdio.h>

int     main()
{
        int     a, b;

        a = 4;
        b = 5;
        ft_swap(&a, &b);
        printf("%i %i", a, b);
}
===WITH AC/AV===
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int i, j;

    i = atoi(av[1]);
    j = atoi(av[2]);
    if (ac > 0)
        ft_swap(&i, &j);
        printf("%i %i", i, j);
}
*/
