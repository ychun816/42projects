/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:31:59 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 10:27:33 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **str, char size)
{
	int		front;
	int		k;
	char	*temp;

	front = 1;
	while (front < size)
	{
		k = ft_strcmp(str[front], str[front + 1]);
		if (k <= 0)
		{
			front++;
		}
		else if (k > 0)
		{
			temp = str[front];
			str[front] = str[front + 1];
			str[front + 1] = temp;
			front = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_sort_int_tab(argv, argc - 1);
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}