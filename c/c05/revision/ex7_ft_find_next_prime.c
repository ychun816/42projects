/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:00:11 by ylin              #+#    #+#             */
/*   Updated: 2023/07/12 18:50:10 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	first_prime;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	first_prime = 3;
	while (first_prime * first_prime <= nb)
	{
		if (nb % first_prime == 0)
			return (0);
		first_prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1)
	{
		if (nb % 2 == 0)
			nb++;
		else
			nb += 2;
	}
	return (nb);
}
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_find_next_prime(atoi(av[1])));
}
