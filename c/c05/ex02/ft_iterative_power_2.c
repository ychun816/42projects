/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:02:00 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 13:48:45 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_power(int nb, int power)
{
    int sum;

    sum = 1;
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    while (power > 0)
    {
        sum = sum * nb;
        power--;
    }
    return (sum);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main (int ac, char *av[])
// {
//     int result;

//     if (ac >= 2)
//     {
//         result = ft_iterative_power(atoi(av[1]), atoi(av[2]));
//         printf("%i", result);
//     }
// }
