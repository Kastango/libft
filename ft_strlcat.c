/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:55:08 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/19 18:35:24 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	remaining;

	if (dest_size <= ft_strlen(dest))
		return (dest_size + ft_strlen(src));
	j = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && j < dest_size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	remaining = ft_strlen(src) - i;
	return (ft_strlen(dest) + remaining);
}
