/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:43:57 by ylin              #+#    #+#             */
/*   Updated: 2023/07/08 13:06:39 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	destlen = count_len(dest);
	srclen = count_len(src);
	if (size <= destlen)
	{
		return (srclen + size);
	}
	while (src[i] && i < (size - destlen - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (srclen + destlen);
}
/*
#include <bsd/string.h>
#include <stdio.h>
	
REMINDER: to compile => cc -lbsd ft_strlcat.c
*/
