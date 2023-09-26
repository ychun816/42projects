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
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/* 
#include <stdio.h>
int main()
{
    int m;
    int n;

    m = 3;
    n = 4;

    printf("before: m = %i, n = %i\n", m, n);
    ft_swap(&m, &n);
    printf("after: m = %i, n = %i\n", m, n);
    return 0;
}
===WITH AC/AV===
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int i;
    int j;

    i = atoi(av[1]);
    j = atoi(av[2]); //declare i,j as int to change av[1](char) to int!

    if (ac > 0) //or: if (ac == 3);
    {
        ft_swap(&i, &j);  // pointer to int
        printf("after swap: %i %i", i, j);  //print out int
    }
}
*/