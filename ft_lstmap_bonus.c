/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:20:57 by jpineiro          #+#    #+#             */
/*   Updated: 2021/11/09 17:40:45 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_node = ft_lstnew(f(lst->content));
	if (!new_node ||!lst || !f)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_list = new_node;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_list, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_node);
	}
	return (new_list);
}
