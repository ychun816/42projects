/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:13:00 by ylin              #+#    #+#             */
/*   Updated: 2023/07/03 18:45:11 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '9') || (str[i] <= '0'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char str1[] = "alpha";
	char str2[] = "a2pha";

	ft_str_is_numeric(str1);
	printf("%s are alphabets!\n", str1);
	ft_str_is_numeric(str2);
	printf("In %s found numbers!\n", str2);
}
*/
