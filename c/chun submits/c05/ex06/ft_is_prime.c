/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:59:07 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 17:00:27 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	index;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	index = 3;
	while (index * index <= nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
if (ac == 2)
printf("%d", ft_is_prime(atoi(av[1])));
}
*/