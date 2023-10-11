/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:28:12 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 20:25:01 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && i < n -1)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i == n)
        return 0;
    else 
        return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
// int main()
// {
//     char    test1[] = "1246";
//     char    test2[] = "1245";

//     int cmp;
//     cmp = ft_strncmp(test1, test2, 1);
//     printf("%i\n", cmp);
// }
=======================AC/AV==============
#include <stdlib.h>
int main(int ac, char *av[])
{
    int cmp;

    if (ac > 1)
    {
        cmp = ft_strncmp(av[1], av[2], atoi(av[3]));
        printf("%i\n", cmp);
    }
}

// The strncmp() function compares not more than n characters.  
// Because strncmp() is designed for comparing strings rather than binary data, 
// characters that appear after a ‘\0’ character are not compared.

// The strcmp() and strncmp() functions return an integer greater than,
// equal to, or less than 0, 
// according as the string s1 is greater than,
// equal to, or less than the string s2.  The comparison is done using
// unsigned characters, so that ‘\200’ is greater than ‘\0’.
*/
