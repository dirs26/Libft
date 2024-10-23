/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:30:47 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/15 17:45:43 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

char *strnstr (char *big, const char *little, unsigned int len) 
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && (i + x) < len)
		{
		if (little[x + 1] == '\0')
				return ((char *)&big[i]);
			x++;
		}
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char *big = "Hello World!";
// 	const char *little = "World";
// 	size_t len = 12;
// 	printf("%s\n", strnstr(big, little, len));
// }