/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:02:13 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 14:02:09 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sum;

	sum = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power > 0)
	{
		sum = nb * ft_recursive_power(nb, power - 1);
	}
	return (sum);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	}
}

====
int	main(void)
{
	printf("0:%d\n", ft_recursive_power(1, -10));
	printf("0:%d\n", ft_recursive_power(1, -1));
	printf("1:%d\n", ft_recursive_power(10, 0));
	printf("10:%d\n", ft_recursive_power(10, 1));
	printf("100:%d\n", ft_recursive_power(10, 2));
	printf("216:%d\n", ft_recursive_power(6, 3));
}
*/
