/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:35:26 by jpineiro          #+#    #+#             */
/*   Updated: 2021/12/08 21:53:11 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
t_list	*p;

	p = lst;
	if (p == NULL || lst == NULL)
		return (NULL);
	if (p->next == NULL)
		return (p);
	while (p)
	{
		if (p->next == NULL)
			return (p);
		p = p->next;
	}
	return (p);
}
