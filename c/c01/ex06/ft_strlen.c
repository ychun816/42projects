/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:38:44 by ylin              #+#    #+#             */
/*   Updated: 2023/07/03 09:53:25 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int     main(void)
{
        char    *ptr;
        ptr = "Hello!";
        printf("%i", ft_strlen(ptr));
}
===ac/av===
#include <stdio.h>
int main(int ac, char *av[])
{
    int wordcount;

    wordcount = ft_strlen(av[1]);
    if (ac > 0)
    {
        printf("%i", wordcount);
    }
}
===========
char *str;
str = "word"
0 = 'H' => str
1 = 'e' => str +1
2 = 'l' => str +2
3 = 'l' => str +3
4 = 'o' => str +4
5 = '!' => str +5
6 = '\0' => str +6

*(str + 3) == str[3]
*/
