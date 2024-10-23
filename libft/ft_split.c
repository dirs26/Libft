/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:53:17 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/21 13:53:17 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freemem(char **res, int wrds)
{
	int	i;

	i = 0;
	while (i < wrds)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static int	cntwrd(char const *s, char c)
{
	int	i;
	int	wrd;

	i = 0;
	wrd = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wrd++;
		i++;
	}
	return (wrd);
}

static int	wrdlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**place_res(char const *s, char c, char **res)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			aux = wdlen(&s[i], c);
			res[j] = (char *)malloc((aux + 1) * sizeof(char));
			if (!res[j])
			{
				return (freemem(res, j), NULL);
			}
			aux = 0;
			while (s[i] && s[i] != c)
				res[j][aux++] = s[i++];
			res[j++][aux] = '\0';
		}
	}
	return (res[j] = NULL, res);
}

char	**ft_split(char const *s, char c)
{
	int		wrd;
	char	**res;

	if (!s)
		return (NULL);
	wrd = cntwrd(s, c);
	res = (char **)malloc((wrd + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (place_res(s, c, res));
}

