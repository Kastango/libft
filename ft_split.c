/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 00:11:00 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/18 23:00:24 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_getnwd(const char *s, char c)
{
	int		i;
	int		w_count;
	int		w_started;

	i = 0;
	w_count = 0;
	w_started = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && w_started == 0)
		{
			w_started = 1;
			w_count++;
		}
		else if (s[i] == c && w_started == 1)
			w_started = 0;
		i++;
	}
	return (w_count);
}

static int	ft_getlenwd(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		w_size;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words = malloc((ft_getnwd(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_getnwd(s, c))
	{
		w_size = 0;
		if (s[i] != c)
		{
			w_size = ft_getlenwd(&s[i], c);
			words[j] = ft_substr(s, i, w_size);
			j++;
		}
		i = i + 1 + w_size;
	}
	words[j] = 0;
	return (words);
}
