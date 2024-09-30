/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:28:31 by diegrod2          #+#    #+#             */
/*   Updated: 2024/09/26 17:36:50 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int atoi(const char* str) {
  int	num;

  num = 0;
  char digit;
  while ((digit = *str++) != '\0') {
    if (digit < '0' || digit > '9') {
      return num;
    }
    num *= 10;
    num += digit - '0';
  }
  return num;
}
