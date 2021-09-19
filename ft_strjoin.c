/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:17:32 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/18 22:58:02 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	joined = (char *)malloc(lens1 + lens2 + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, lens1);
	ft_strlcpy(&joined[lens1], s2, lens2 + 1);
	return (joined);
}
