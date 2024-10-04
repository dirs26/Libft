/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:30:47 by diegrod2          #+#    #+#             */
/*   Updated: 2024/09/30 16:30:58 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char *strnstr (char *big, const char *little, unsigned int len) 
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && i + j < len)
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char *big = "Hello World!";
// 	const char *little = "World";
// 	unsigned int len = 12;
// 	printf("%s\n", strnstr(big, little, len));
// }