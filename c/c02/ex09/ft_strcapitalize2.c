/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:54:01 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 15:55:31 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i])

        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+') && str[i] >= 'a' && str[i] <= 'z')
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
    char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char *result;

    printf("%s\n", test);
    result = ft_strcapitalize(test);
    printf("%s\n", result);
    return 0;
}
========================AC/AV======
int main(int ac, char *av[])
{
    char *result;

    if (ac == 2)
    {
        result = ft_strcapitalize(av[1]);
        printf("%s\n", result);
        return 0;
    }
}
*/
