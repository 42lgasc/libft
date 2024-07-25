/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:52:21 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 16:05:11 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

////Counts the number of nodes in a list.
///@param	list	The beginning of the list.
///@return	Last node of the list.
t_node	*ft_lstlast(t_node *const list)
{
	t_node	*link;

	if (! list)
		return ((t_node *){NULL});
	link = list;
	while (link->next)
		link = link->next;
	return (link);
}
