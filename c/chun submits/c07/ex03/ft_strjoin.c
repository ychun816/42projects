/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:40:59 by ylin              #+#    #+#             */
/*   Updated: 2023/07/18 18:36:48 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (*str != '\0')
	{
		nb++;
		str++;
	}
	return (nb);
}

int	ft_total_len(char **strs, int size)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (i < size)
	{
		nb = nb + ft_strlen(strs[i]);
		i++;
	}
	return (nb);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		result_len;
	char	*result;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result_len = ft_strlen(sep) * (size - 1) + ft_total_len(strs, size) + 1;
	result = malloc(result_len * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(result, strs[i]);
		ft_strcat(result, sep);
		i++;
	}
	ft_strcat(result, strs[i]);
	return (result);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac, av, ",_"));
}

====================OTHER WAY
#include <stdlib.h>

// strlen
int	ft_countlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// count str len
int	l(char **strs)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
}
return (count);

// strcat/ join
char	ft_join(char *str, char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		words;
	char	*sep_ptr;

	i = 0;
	words = 0;
	while (str[i])
	{
		j = 0;
		sep_ptr = sep;
		while (strs[words][j])
			str[i++] = strs[words][j++];
		while (words + 1 < size && *sep_ptr != '\0')
		{
			str[i++] = *sep_ptr;
			sep_ptr++;
		}
		words++;
	}
	str[i] = '\0';
}

// strjoin
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * l(strs) + (ft_len(sep) * size + 1));
	ft_join(str, strs, sep, size);
	return (str);
}

#include <stdio.h>

int	main(int ac, char **av)

{
	// char *m = "abc";
	// char *n = ",";,

	(void)ac;
	printf("%s\n", av[1], av[2]);
	// free();
}
*/