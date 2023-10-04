/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:45:09 by ylin              #+#    #+#             */
/*   Updated: 2023/07/05 21:43:38 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
    while ( str[i]!= '\0')
    {
        if (!(str[i] > 'A' && str[i] < 'Z' || str[i] > 'a' && str[i] < 'z'))
            return 0;
        i++;
    }
    return 1;
}
/*
#include <stdio.h>
int main()
{
    char test1[] = "hello!";
    char test2[] = "";
    int result1;
    int result2;

    result1 = ft_str_is_alpha(test1);
    printf("%i\n", result1);
    result2 = ft_str_is_alpha(test2);
    printf("%i\n", result2);
    return 0;
}
==============AC/AV====
#include <stdio.h>
int main(int ac, char *av[])
{
    int result;

    if (ac == 2)
    {
        result = ft_str_is_alpha(av[1]);
        printf("%i", result);
    }
}
*/
