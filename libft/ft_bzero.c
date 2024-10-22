/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:23:01 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/02 15:53:56 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero (void *s, int n)
{
	int	i;
	char	*ptr;
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main (void) {
// 	char str[50];
// 	str[50] = "Hello World!";
// 	ft_bzero(str, 3);
// 	write(1, str, strlen(str));
// 	return (0);
// }