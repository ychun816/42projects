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
	while (str[i] != '\0') //while(str[i]);
	{
		write(1, &str[i], 1);
		i ++;
	}
}
/*
int main()
{
    char *test; 
    //*can't use "char test" => too little storage for a sentence!
    //*char is for only one/really short character!
    //*therefore, declare a "char pointer"

    test = "I'm pretty!";
    ft_putstr(test);
    return 0;
}

============================AC/AV===========
int main(int ac, char *av[])
{
    if (ac > 0)
    {
        ft_putstr(av[1]);
        return 0;
    }
}
*/