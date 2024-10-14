/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:48:17 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/14 18:48:17 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_putstr_fd(char *s, int fd)
{
	int	ret;

	ret = 0;
	while (*s)
		ret += write(fd, s++, 1);
	return (ret);
}