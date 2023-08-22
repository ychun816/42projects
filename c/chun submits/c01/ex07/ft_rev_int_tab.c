/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:52:14 by ylin              #+#    #+#             */
/*   Updated: 2023/07/02 20:02:52 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	left;
	int	right;

	left = 0;
	right = size -1;
	while (left < (size / 2))
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}	
}
/*
#include <stdio.h>

int	main()
{
	int arr[6] = {0,1,2,3,4,5};
	// int *arr = {0,1,2,3,4,5};

	ft_rev_int_tab(arr, 6);
	printf("%d,%d,%d,%d,%d,%d", arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
}
*/
/* ANOTHER METHOD
void	ft_rev(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <size /2)
	{
		ft_rev(&tab[i], &tab[size -i -1]);
		i ++;
	}
}

#include <stdio.h>
int	main()
{
	int	tab[5] = {0,1,2,3,4}
	int	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4])
}
*/
