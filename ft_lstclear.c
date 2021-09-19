/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:13:12 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/19 03:07:10 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!lst)
		return ;
	aux = *lst;
	while (aux->next != NULL)
	{
		ft_lstdelone(aux, del);
		aux = aux->next;
	}
	ft_lstdelone(aux, del);
	*lst = 0;
}
