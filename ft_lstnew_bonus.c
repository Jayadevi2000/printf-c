/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpineiro <jpineiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 12:58:20 by jpineiro          #+#    #+#             */
/*   Updated: 2021/11/06 18:54:39 by jpineiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *) malloc(sizeof(t_list));
	if (nodo == NULL)
	{
		return (NULL);
	}
	nodo ->content = content;
	nodo ->next = NULL;
	return (nodo);
}
