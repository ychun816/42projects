/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:04:40 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 13:29:13 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		sum = sum * nb;
		nb--;
	}
	return (sum);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_iterative_factorial(atoi(av[1])));
}
=============
int	main(void)
{
	printf("0:%d\n", ft_iterative_factorial(-10));
	printf("0:%d\n", ft_iterative_factorial(-1));
	printf("1:%d\n", ft_iterative_factorial(0));
	printf("1:%d\n", ft_iterative_factorial(1));
	printf("3628800:%d\n", ft_iterative_factorial(10));
	printf("6:%d\n", ft_iterative_factorial(3));
	printf("120:%d\n", ft_iterative_factorial(5));
}
==============
Factorial Program
6! = 6*5*4*3*2*1 = 720
5! = 5*4*3*2*1 = 120 
3! = 3*2*1 = 6 
*/