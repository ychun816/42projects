/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:43:41 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:44:57 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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
	char str1[] = "ABC";
	char str2[] = "abc";

	ft_str_is_uppercase(str1);
	printf("%s ! Uppercase!\n", str1);
	ft_str_is_uppercase(str2);
	printf("%s ! Not uppercase!\n", str2);
}
*/
