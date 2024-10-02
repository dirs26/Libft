/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:23:36 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/02 16:20:41 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	if (str1 < str2)
	{
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	else
	{
		while (len--)
			str1[len] = str2[len];
	}
	return (dst);
}