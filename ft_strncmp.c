/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:31:15 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/10 17:28:32 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i + 1 < n)
			i++;
		else
			return (0);
	}
	if (((unsigned char)(s1[i]) - (unsigned char)(s2[i])) > 0)
		return (1);
	else if (((unsigned char)(s1[i]) - (unsigned char)(s2[i])) < 0)
		return (-1);
	else
		return (0);
}
