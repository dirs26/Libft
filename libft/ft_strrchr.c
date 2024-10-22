/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:28:37 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/09 14:40:59 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	char	*lastap;

	i = 0;
	lastap = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			lastap = (char *) &str[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&str[i]);
	return (lastap);
}

/*
int	main(void)
{
	const char *texto = "hola adios hola";
	char *resultado = ft_strrchr(texto, 'h');

	if (resultado != NULL)
	{
		printf("Carácter encontrado: %c\n", *resultado);
		printf("Posición: %ld\n", resultado - texto);
	}
	else
	{
		printf("Carácter no encontrado.\n");
	}

	return (0);
}*/