/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:52:44 by ylin              #+#    #+#             */
/*   Updated: 2023/07/10 22:18:37 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_error(char *str)
{
	int	base_len;
	int	i;
	int	next;

	base_len = ft_strlen(str);
	i = 0;
	if (base_len < 2)
		return (0);
	while (str[i])
	{
		next = i + 1;
		while (next < base_len)
		{
			if ((str[i] == str[next]) || (str[i] == '+' || str[i] == '-'))
				return (0);
			next++;
		}
		i++;
	}
	return (1);
}

void	count_limit(long int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= ft_strlen(base))
	{
		count_limit(nb / ft_strlen(base), base);
		count_limit(nb % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (ft_error(base) == 0)
		return ;
	if (nbr >= 0 && nbr < base_len)
	{
		ft_putchar(base[nbr]);
	}
	else if (nbr == -2147483648)
	{
		count_limit(nbr, base);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * -1, base);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}
/*
#include <string.h>

int main()
{
    char dec[] = "0123456789";
    char hex[] = "0123456789ABCDEF";
    char oct[] = "sophiayeb";
    char bin[] = "01";

    int nb = 42;
    ft_putnbr_base(nb, hex);
    write(1, "\n", 1);
    ft_putnbr_base(nb, dec);
    write(1, "\n", 1);
    ft_putnbr_base(nb, oct);
    write(1, "\n", 1);
    ft_putnbr_base(nb, bin);
    write(1, "\n", 1);
    return (0);
}
=========
int	main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
============
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(-24);
*/