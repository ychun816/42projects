/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:25:34 by ylin              #+#    #+#             */
/*   Updated: 2023/07/12 12:20:59 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0');
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{   
    char m_dest[] = "Bad";
    char m_src[] = "MAN";

    printf("original: %s & %s\n", m_dest, m_src);
    ft_strcpy(m_dest, m_src);
    printf("copied: %s\n", m_dest);
    return 0;
}
*/
