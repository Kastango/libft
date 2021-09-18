/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:09:53 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/18 20:09:39 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (n == 0 || s1 == s2)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
	{
		if (i + 1 < n)
			i++;
		else
			return (0);
	}
	if (str1[i] - str2[i] > 0)
		return (1);
	else if (str1[i] - str2[i] < 0)
		return (-1);
	else
		return (0);
}
