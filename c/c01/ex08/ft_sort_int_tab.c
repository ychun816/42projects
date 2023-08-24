/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:38:02 by ylin              #+#    #+#             */
/*   Updated: 2023/07/18 10:13:58 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size - 2)
	{
		while (i <= size - 2)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i++;
			}
			else if (tab[i] <= tab[i + 1])
				i++;
		}
		size--;
		i = 0;
	}
}
/*
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
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **str, char size)
{
	int		front;
	int		check_order;
	char	*temp;

	front = 1;
	while (front < size)
	{
		check_order = ft_strcmp(str[front], str[front + 1]);
		if (check_order <= 0)
			front++;
		else if (check_order > 0)
		{
			temp = str[front];
			str[front] = str[front + 1];
			str[front + 1] = temp;
			front = 1;
		}
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_sort_int_tab(av, ac - 1);
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
*/