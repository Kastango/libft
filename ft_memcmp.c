/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:09:53 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/10 17:24:41 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while ((unsigned char)str1[i] == (unsigned char)str2[i] && i < n)
	{
		if (i + 1 < n)
			i++;
		else
			return (0);
	}
	if (((unsigned char)(str1[i]) - (unsigned char)(str2[i])) > 0)
		return (1);
	else if (((unsigned char)(str1[i]) - (unsigned char)(str2[i])) < 0)
		return (-1);
	else
		return (0);
}
