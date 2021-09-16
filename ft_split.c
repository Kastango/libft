/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 00:11:00 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/16 02:46:01 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (strlen(src));
}
*/
//////piriaria

static int	ft_getnwd(const char *s, char c)
{
	int		i;
	int		w_count;
	int		w_started;
	char	*tmp;

	tmp = (char *)s;
	i = 0;
	w_count = 0;
	w_started = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] != c && w_started == 0)
		{
			w_started = 1;
			w_count++;
		}
		else if (tmp[i] == c && w_started == 1)
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
	int		n;
	int		w_size;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	n = ft_getnwd(s, c);
	words = (char **)malloc(sizeof(char *) * (n + 1));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (j < n)
	{
		w_size = 0;
		if (s[i] != c)
		{
			w_size = ft_getlenwd(&s[i], c);
			words[j] = (char *)ft_calloc((w_size + 1), sizeof(char));
			if (!words[j])
				return (NULL);
			ft_strlcpy(words[j], &s[i], w_size + 1);
			j++;
		}
		i = i + 1 + w_size;
	}
	return (words);
}
/*
int main()
{
	char **words;
	char **words1;

	int i = 0;

	words = ft_split("", 'z');
	if (!words[1])
		printf("ok\n");
	printf("%s, %s, %s\n", words[0], words[1], words[2]);
	words1 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("%s, %s, %s, %s, %s", words1[0], words1[1], words1[2], words1[3], words1[4]);
}
*/
