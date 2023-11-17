/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:59:07 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 17:00:27 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_is_prime(int nb)
{
    int first_prime;

    first_prime = 2;
    if (nb <= 1)
        return 0;
    while (first_prime * first_prime <= nb)
    {
        if (nb % first_prime == 0)
            return 0;
        first_prime++;
    }
    return 1;
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char *av[])
{
    int result;
    if (ac == 2)
    {
        result = ft_is_prime(atoi(av[1]));
        printf("%i", result);
    }
}
*/