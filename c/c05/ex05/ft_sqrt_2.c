/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:20:09 by ylin              #+#    #+#             */
/*   Updated: 2023/07/12 15:18:33 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_sqrt(int nb)
{
    int root;

    root = 1;
    if (nb == 0)
        return 0;
    while (root * root < nb && root < 46340)
    {
        root++;
    }
    if (root * root == nb)
        return root;
    else 
        return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
    int result;

    if (ac >= 2)
    {
        result = ft_sqrt(atoi(av[1]));
        printf("%i", result);
    }
}
*/