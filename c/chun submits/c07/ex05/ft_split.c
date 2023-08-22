/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:50:07 by ylin              #+#    #+#             */
/*   Updated: 2023/07/19 10:05:23 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		if (!(ft_checksep(str[i], charset)))
		{
			wordcount++;
			while (str[i] && (!(ft_checksep(str[i], charset))))
				i++;
		}
		i++;
	}
	return (wordcount);
}

char	*ft_strdup(char *str, char *charset, int *pos_str)
{
	int		first_pos;
	int		i;
	char	*ptr_dup;

	while (ft_checksep(str[*pos_str], charset))
		(*pos_str)++;
	first_pos = *pos_str;
	while (str[*pos_str] && !(ft_checksep(str[*pos_str], charset)))
		(*pos_str)++;
	ptr_dup = (char *)malloc(sizeof(char) * (*pos_str - first_pos + 1));
	if (!ptr_dup)
		return (NULL);
	i = 0;
	while ((first_pos + i) < (*pos_str))
	{
		ptr_dup[i] = str[first_pos + i];
		i++;
	}
	ptr_dup[i] = '\0';
	return (ptr_dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		pos;
	int		last_c;
	char	**spl_array;

	last_c = ft_count_words(str, charset);
	spl_array = (char **)malloc(sizeof(char *) * (last_c + 1));
	i = 0;
	pos = 0;
	if (!spl_array)
		return (NULL);
	spl_array[last_c] = 0;
	while (i < ft_count_words(str, charset))
	{
		spl_array[i] = ft_strdup(str, charset, &pos);
		i++;
	}
	return (spl_array);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char **array;
	int i;
	int number;

	(void)ac;
	array = ft_split(av[1], av[2]);
	i = 0;
	number = ft_count_words(av[1], av[2]);
	while (i < number)
	{
		printf("||%s||\n", array[i]);
		i++;
	}
	printf("%s", array[number]);
	free(array);
}
*/
