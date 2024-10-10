/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:29:08 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 17:24:35 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;

	while (i < n)
	{ 
		if (str1[i] != str2[i])
		{
			return (unsigned char)str1[i] - (unsigned char)str2[i];
		}
		if (str1[i] == '\0' || str2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return(0);
}
/*
#include <stdio.h>
int main() {
    char str1[] = "Hola";
    char str2[] = "Holanda";

    if (my_strncmp(str1, str2, 4) == 0) {
        printf("Las cadenas son iguales hasta los primeros 4 caracteres.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}*/
