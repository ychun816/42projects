/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:11:53 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:45:30 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++ ;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
char	test_str[100] = "AfsojJfsdoC";
printf("%s", ft_strupcase(test_str));
}
*/
