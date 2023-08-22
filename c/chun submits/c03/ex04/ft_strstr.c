/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:38:23 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 13:06:04 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j])
		{
			j++;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	if (to_find[j] == 0)
	{
		return (str + i - j);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char m[] = "HI! You are my Friend!";
	char n[] = "are";
	
	printf("%s", ft_strstr(m, n));
}
*/
