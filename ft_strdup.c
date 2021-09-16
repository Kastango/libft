/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:10:12 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/12 14:31:09 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *original)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(original) + 1;
	copy = (char *)malloc(sizeof(char) * len);
	if (!copy)
		return (0);
	return (ft_memcpy(copy, original, len));
}
