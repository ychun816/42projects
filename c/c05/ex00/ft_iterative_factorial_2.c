/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:04:40 by ylin              #+#    #+#             */
/*   Updated: 2023/07/11 13:29:13 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_factorial(int nb)
{
    int sum;

    sum = 1; 
    //not valid > return 0;
    if (nb < 0)
        return 0;
    while (nb > 0)
    {
        sum = sum * nb; 
        nb --;
    }
    return (sum);
}

// #include <stdio.h>
// // #include <stdlib.h>
// // int main(int ac, char *av[])
// // {
// //     int result;

// //     if (ac == 2)
// //     {
// //         result = ft_iterative_factorial(atoi(av[1]));
// //         printf ("%i", result);
// //     }
// // }

// int main()
// {
//     int result;

//     result = ft_iterative_factorial(3);
//     printf("%i", result);
// }
// ==============
// Factorial Program
// 6! = 6*5*4*3*2*1 = 720
// 5! = 5*4*3*2*1 = 120 
// 3! = 3*2*1 = 6 