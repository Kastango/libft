/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:58:19 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/19 17:08:02 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	islong(long sum, long negative, int i)
{
	if ((sum * negative) > 0 && i > 20)
		return (-1);
	else if ((sum * negative) < 0 && i > 20)
		return (0);
	else
		return (sum * negative);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	sum;
	long	negative;

	i = 0;
	negative = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			negative *= -1;
		i++;
	}
	sum = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + (nptr[i] - '0');
		if (nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
			i++;
		else
			break ;
	}
	return (islong(sum, negative, i));
}
