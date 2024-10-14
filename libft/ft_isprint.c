/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:41 by diegrod2          #+#    #+#             */
/*   Updated: 2024/09/24 14:19:18 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main() {
//   printf("%d\n", ft_isprint('a'));
//   printf("%d\n", ft_isprint('A'));
//   printf("%d\n", ft_isprint('9'));
//   printf("%d\n", ft_isprint(' '));
//   printf("%d\n", ft_isprint('!'));
//   return 0;
// }