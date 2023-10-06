/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:57:30 by ylin              #+#    #+#             */
/*   Updated: 2023/07/17 15:27:07 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size > 0)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
     return i;
}
/*
#include <stdio.h>
int main()
{
    char test_d[] = "DESTi";
    char test_s[] = "source";
    unsigned int len;
    len = ft_strlcpy(test_d, test_s, sizeof(test_d));
    printf("%u\n", len);
    return 0;
}
*/