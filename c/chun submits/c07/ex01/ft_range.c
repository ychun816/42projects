/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:30:01 by ylin              #+#    #+#             */
/*   Updated: 2023/07/16 20:44:10 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*ptr_array;

	i = 0;
	j = max - min;
	if (min >= max)
		return (NULL);
	ptr_array = (int *)malloc(sizeof(int) * (j + 1));
	if (ptr_array == NULL)
		return (NULL);
	while (i <= j)
		ptr_array[i++] = min++;
	return (ptr_array);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	*test;

	i = 0;
	test = ft_range(atoi(av[1]), atoi(av[2]));
	if (test == NULL)
		return (1);
	(void)ac;
	while (i < atoi(av[2]) - atoi(av[1]))
		printf("%d\n", test[i++]);
	free(test);
	return (0);
}
*/