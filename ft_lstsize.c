/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 00:15:53 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/19 00:28:18 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		i;
	
	if (!lst)
		return (0);
	aux = lst->next;
	i = 1;
	while (aux != NULL)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
