/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:57:13 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 14:38:47 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1)
	{
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_fibonacci(atoi(av[1])));
}

#include <stdio.h>

int	main(void)
{
	printf("0:%d\n", ft_fibonacci(0));
	printf("1:%d\n", ft_fibonacci(1));
	printf("1:%d\n", ft_fibonacci(2));
	printf("2:%d\n", ft_fibonacci(3));
	printf("55:%d\n", ft_fibonacci(10));
	printf("8:%d\n", ft_fibonacci(6));
}
*/