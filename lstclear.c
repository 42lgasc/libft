/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:28:07 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 15:52:11 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Deletes and frees the given node and every successor of that node,
///	using the `deleter` function and free(3).
///Finally, the pointer to the `list` must be set to `NULL`.
///@param	list	The address of the head pointer of a list
///@param	deleter	The address of the function used to
///					delete the `content` of each node
///@remark	External function: `free`.
void	ft_lstclear(t_list **const list, void (*const deleter)(const void *))
{
	t_node	*link;
	t_node	*next_link;

	if (! list || ! deleter)
		return ;
	link = *list;
	while (link != (t_node *){NULL})
	{
		deleter(link->content);
		next_link = link->next;
		free((t_node *){link});
		link = next_link;
	}
	*list = (t_node *){NULL};
}
