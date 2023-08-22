/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:20:09 by ylin              #+#    #+#             */
/*   Updated: 2023/07/12 18:42:37 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb == 0)
		return (0);
	while (result * result < nb && result < 46340)
	/// result *resut > 0 
		result++;
	if (result * result != nb)
		return (0);
	else
		return (result);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_sqrt(atoi(av[1])));
}

