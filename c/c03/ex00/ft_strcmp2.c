/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:20:34 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 13:02:22 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;
    unsigned int differ;

    i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
            differ = s1[i] - s2[i]; 
        i++;
    }
    return (differ); 
}

/*
#include <stdio.h>
int main()
{
    char    test1[] = "ABH";
    char    test2[] = "ABC";
    int cmp;

    cmp = ft_strcmp(test1, test2);
    printf("%i\n", cmp);
}
============================AC/AV====
int main(int ac, char *av[])
{
    int cmp;

    if (ac > 1)
    {
        cmp = ft_strcmp(av[1], av[2]);
        printf("%i\n", cmp);
    }
}
*/