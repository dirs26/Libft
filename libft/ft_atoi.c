/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:28:31 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 15:08:57 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_atoi(const char* str) {
  int	num;
  char	digit;

  num = 0;
  while ((digit = *str++) != '\0') {
    if (digit < 48 || digit > 57) {
      return num;
    }
    num *= 10;
    num += digit - '0';
  }
  return num;
}
// int main() {
//     const char* str1 = "12a34";
//     int num1 = ft_atoi(str1);
//     printf("The integer value of '%s' is: %d\n", str1, num1);
//     return 0;
// }