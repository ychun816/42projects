/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:14:49 by ylin              #+#    #+#             */
/*   Updated: 2023/07/03 11:45:32 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}
/*
#include <stdio.h>

int     main()
{
        char* test = "Hello!";
        ft_putstr(test);
}
===ac/av===
	while (str[i])
	{
		write(1, &str[i++], 1);
		i ++;
	}

#include <stdio.h>

int main(int ac, char *av[])
{
    if (ac > 0)
    {
        ft_putstr(av[1]);
    }
}
*/
