/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:31:01 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 13:04:25 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

/*
#include <stdio.h>
int     main()
{
    char text1[] = "Hey!";
    char text2[] = "You so cool";
    char *result;

    result = ft_strcat(text1, text2);
    printf("%s\n", result);
}
=========================AC/AV======
int main(int ac, char *av[])
{
    char *result;

    if (ac > 0)
    {
        result = ft_strcat(av[1], av[2]);
        printf("%s\n", result);
    }
}
*/
