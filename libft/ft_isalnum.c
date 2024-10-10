/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:25:29 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 16:16:29 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57));
}

int main() {
  printf("%d\n", ft_isalnum('a'));
  printf("%d\n", ft_isalnum('A'));
  printf("%d\n", ft_isalnum('z'));
  printf("%d\n", ft_isalnum('Z'));
  printf("%d\n", ft_isalnum('0'));
  printf("%d\n", ft_isalnum('9'));
  printf("%d\n", ft_isalnum(' '));
  printf("%d\n", ft_isalnum('!'));
  return 0;
}
