/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:43:41 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:44:57 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!(str[i] >= 32 && str[i] <= 127))
            return 0;
        i++;
    }
    return 1;
}
/*
#include <stdio.h>
int main(int ac, char *av[])
{
    int result;

    if (ac == 2)
    {
        result = ft_str_is_printable(av[1]);
        printf("%i", result);
        return 0;
    }
}
*/