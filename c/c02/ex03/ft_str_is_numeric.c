/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:13:00 by ylin              #+#    #+#             */
/*   Updated: 2023/07/03 18:45:11 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
        i++;
    }
    return 1;
}
/*
#include <stdio.h>
int main()
{
    char test1[] = "168";
    char test2[] = "A168";
    char test3[] = "";
    int res1;
    int res2;
    int res3;
    res1 = ft_str_is_numeric(test1);
    res2 = ft_str_is_numeric(test2);
    res3 = ft_str_is_numeric(test3);
    printf("%i / %i / %i", res1, res2, res3);
}
===============================AC/AV====
int main(int ac, char *av[])
{
    int result;

    if (ac == 2)
    {
        result = ft_str_is_numeric(av[1]);
        printf("%i", result);
        return 0;
    }
}
*/