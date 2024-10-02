/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:23:46 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/02 15:57:37 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (0);
}