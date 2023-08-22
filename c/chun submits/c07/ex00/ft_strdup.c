/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:28:14 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 20:44:24 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str1;

	str1 = ft_strdup(av[1]);
	if (ac == 2)
	{
		printf("%s\n", str1);
	}
	free(str1);
	return (0);
}
=============================
knoow: str_len(size), the allocate, then copy str
malloc
ptr = (castType *)malloc(size);
dup_str = (char *)malloc(len_src * sizeof(char))
	free(ptr);
This statement frees the space allocated in the memory pointed by ptr
valgrind-- tool = memcheck-- leak - check = yes example2
*/