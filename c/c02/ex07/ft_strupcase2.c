/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:11:53 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:45:30 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}
/*
#include <stdio.h>
int main()
{
    char test1[] = "aPPLE";
    char test2[] = "miLk";
    char *result1;
    char *result2;
    result1 = ft_strupcase(test1);
    result2 = ft_strupcase(test2);
    printf("%s! %s!\n", result1, result2);
    return 0;
}
=============================AC/AV==
int main(int ac, char *av[])
{
    char *result;

    if (ac == 2)
    {
        result = ft_strupcase(av[1]);
        printf("upperised: %s\n", result);
    }
}
*/