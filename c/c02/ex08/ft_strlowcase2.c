/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:31:25 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:46:04 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main(int ac, char *av[])
{
    char *result;

    if (ac == 2)
    {
        result = ft_strlowcase(av[1]);
        printf("lowerised: %s\n", result);
    }
}
*/
