/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:54:02 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/16 21:34:17 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	if (!str)
		return (0);
	if ((unsigned int)ft_strlen(str) < start)
		return (ft_strdup(""));
	str_len = ft_strlen(&str[start]);
	if (str_len < len)
		len = str_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	ft_strlcpy(substr, &str[start], len + 1);
	return (substr);
}
