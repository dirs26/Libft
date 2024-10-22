/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:20:19 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 16:57:06 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t len)
// void *s es un puntero que tiene que ser rellenado con el valor de c
{
	unsigned char *st;
	size_t i;

	st = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	str[50];

	str[50] = "Hello World!";
	ft_memset(str, '-', 3);
	write(1, str, strlen(str));
	return (0);
}
*/