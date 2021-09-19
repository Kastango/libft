/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arbernar <arbernar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:50:10 by arbernar          #+#    #+#             */
/*   Updated: 2021/09/19 16:51:26 by arbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_entry;
	t_list	*first;

	if (!lst)
		return (NULL);
	first = ft_lstnew(f(lst->content));
	if (!first)
		return (NULL);
	new_entry = first;
	lst = lst->next;
	while (lst != NULL)
	{
		new_entry->next = ft_lstnew(f(lst->content));
		if (new_entry->next == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new_entry = new_entry->next;
		lst = lst->next;
	}
	return (first);
}
