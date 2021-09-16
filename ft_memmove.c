/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:48:10 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/07 23:48:00 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	const unsigned char	*src;
	unsigned char		*dest;
	size_t				i;

	src = (unsigned char *)source;
	dest = (unsigned char *)destination;
	if (!src && !dest)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			dest[n] = src[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (destination);
}
