/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:31:05 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/11 20:01:09 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && len >= ft_strlen(little))
	{	
		if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
			return ((char *)&big[i]);
		len--;
		i++;
	}
	return (NULL);
}
