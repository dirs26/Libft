/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:37:48 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/15 17:20:05 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sz_src;

	i = 0;
	sz_src = ft_strlen(src);
	if (size == 0)
		return(sz_src);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sz_src);
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