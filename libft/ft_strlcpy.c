/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:37:48 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 17:23:17 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (i + 1);
}
/*
int main() {
  char dest[50];
  char src[50] = "Hello World!";
  printf("%d\n", ft_strlcpy(dest, src));
  printf("%s\n", dest);
  return 0;
}
*/