/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:02:00 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 13:48:45 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		sum = sum * nb;
		power--;
	}
	return (sum);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	}
}
=========
int	main(void)
{
	printf("0:%d\n", ft_iterative_power(1, -10));
	printf("0:%d\n", ft_iterative_power(1, -1));
	printf("1:%d\n", ft_iterative_power(10, 0));
	printf("10:%d\n", ft_iterative_power(10, 1));
	printf("100:%d\n", ft_iterative_power(10, 2));
	printf("216:%d\n", ft_iterative_power(6, 3));
}
*/
