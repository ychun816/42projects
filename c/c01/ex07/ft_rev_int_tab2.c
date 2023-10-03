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
	right = size - 1;
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
=========main A===
#include <stdio.h>
int main()
{
    int array[5] = {0, 1, 2, 3, 4};

    ft_rev_int_tab(array, 5);
    printf("reversed: %i, %i, %i, %i, %i", array[0], array[1], array[2], array[3], array[4]);
}
=========main B===
#include <stdlib.h>
int main(int ac, char *av[])
{
    int nb1;
    int nb2;
    int nb3;
    int array[3] = {nb1, nb2, nb3};

    if (ac != 4)
    {
        printf("usage: %s[number1][number2][number3]\n", av[0]);
        return 1;    
    }
    nb1 = atoi(av[1]);
    nb2 = atoi(av[2]);
    nb3 = atoi(av[3]);
    array[0] = nb1;
    array[1] = nb2;
    array[2] = nb3;
    printf("original: %i, %i, %i\n", array[0],array[1], array[2]);
    ft_rev_int_tab(array, 3);
    printf("reversed: %i, %i, %i\n", array[0],array[1], array[2]);
    return 0;
    }
*/