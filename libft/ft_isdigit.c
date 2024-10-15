/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:25:57 by diegrod2          #+#    #+#             */
/*   Updated: 2024/09/24 14:18:19 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// int main() {
//   printf("%d\n", ft_isdigit('a'));
//   printf("%d\n", ft_isdigit('A'));
//   printf("%d\n", ft_isdigit('9'));
// }