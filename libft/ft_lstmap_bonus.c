/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:37:28 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/12 15:50:58 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (NULL);
	current = new_lst;
	lst = lst->next;
	while (lst)
	{
		current->next = ft_lstnew((*f)(lst->content));
		if (! current->next)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (new_lst);
}
