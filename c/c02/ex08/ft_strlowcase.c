/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:31:25 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:46:04 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_uppercase(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i ++ ;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char test_str[100] = "AfsojJfsdoC";
	printf("%s", ft_strlowcase(test_str));
}
*/
