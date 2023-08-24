/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:57:30 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 15:27:07 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%d\n", ft_strlcpy(av[1], av[2], atoi(av[3])));
	printf("%s\n", av[1]);
}
=================
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[10];
	char	str2[10];
	int		i;

	i = 0;
	strcpy(str1, "aaa");
	strcpy(str2, "bbbbb");
	i = ft_strlcpy(str2, str1, 2);
	printf("%s,%s, %i", str1, str2, i);
	return (0);
}
*/
