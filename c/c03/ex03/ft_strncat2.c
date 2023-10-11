/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:11:36 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 13:05:02 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i])
    {
        i++;
    }
    while (src[j] && j <= nb)
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
    char text1[] = "hey!";
    char text2[] = "YOU";
    char *result;

    result = ft_strncat(text1, text2, 3);
    printf("%s\n", result);
}
=========================AC/AV======
#include <stdlib.h>
int main(int ac, char *av[])
{
    char *result;

    if (ac > 0)
    {
        result = ft_strncat(av[1], av[2], atoi(av[3]));
        printf("%s\n", result);
    }
}
*/