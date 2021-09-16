/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 00:43:14 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/14 00:28:50 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isnegative(long *n, size_t *size)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*size = 1;
		return (1);
	}
	else
	{
		*size = 0;
		return (0);
	}
}

static void	ft_sizeln(long *ln, size_t *size)
{
	if (*ln == 0)
		*size = 1;
	else
	{
		while (*ln > 0)
		{
			*ln = *ln / 10;
			*size = *size + 1;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*a;
	size_t	size;
	int		negative;
	long	n_copy;
	long	ln;

	ln = (long int)n;
	negative = ft_isnegative(&ln, &size);
	n_copy = ln;
	ft_sizeln(&ln, &size);
	a = (char *)malloc(size + 1);
	if (!a)
		return (0);
	a[size] = '\0';
	while (n_copy > 0)
	{
		size--;
		a[size] = n_copy % 10 + '0';
		n_copy = n_copy / 10;
	}
	if (n == 0)
		a[0] = '0';
	if (negative)
		a[0] = '-';
	return (a);
}
