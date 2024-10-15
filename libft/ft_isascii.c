/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:39:01 by diegrod2          #+#    #+#             */
/*   Updated: 2024/09/24 14:17:44 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main() {
//   printf("%d\n", ft_isascii('z'));
//   printf("%d\n", ft_isascii('Z'));
//   printf("%d\n", ft_isascii('9'));
//   printf("%d\n", ft_isascii(' '));
//   printf("%d\n", ft_isascii('!'));
//   return 0;
// }