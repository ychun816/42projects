/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:31:01 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 13:04:25 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char m[] = "HI!";
	char n[] = "friend!";
	
	printf("%s", ft_strcat(m, n));
}

======================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char *i;
	char str1[100] = "123";
	char str2[100] = "456";
	i = ft_strcat(str1, str2);
	printf("%s\n", i);
	i = ft_strcat(str1, str2);
	printf("%s\n", i);
	i = ft_strcat(str1, str2);
	printf("%s\n", i); 
}

#include <stdio.h>

int	main()
{
	char* i = "Hello!";
	char* j = "Friends!";
	
	ft_strcat(i, j);
	printf("%s\n", ft_strcat(i, j)); 
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
