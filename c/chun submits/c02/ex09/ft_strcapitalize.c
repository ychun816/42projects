/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:54:01 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 15:55:31 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i++;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strcapitalize(av[1]));
}

==================
#include <stdio.h>

int	main(void)
{
	char	test_str[100];

	test_str[100] = "42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(test_str));
}
===============================
int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_alphanumeric(str[i - 1] < 0))
		{
			if (ft_char_is_lowercase(str[i]))
				str[i] = str[i] - ('a' - 'A');
			else
			{
				if (ft_char_is_uppercase(str[i]))
					str[i] = str[i] + ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
*/
