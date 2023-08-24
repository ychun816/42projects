/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:00:16 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 20:26:38 by ylin             ###   ########.fr       */
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
	ptr_array = malloc(sizeof(int) * (j + 1));
	if (ptr_array == NULL)
		return (NULL);
	while (i <= j)
		ptr_array[i++] = min++;
	return (ptr_array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (ft_range(min, max) == NULL)
		return (-1);
	else
	{
		*range = ft_range(min, max);
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	*array;

	(void)ac;
	printf("%d\n", ft_ultimate_range(&array, atoi(av[1]), atoi(av[2])));
	free(array);
	return (0);
}
*/