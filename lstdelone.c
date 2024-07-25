/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:35:49 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 15:58:13 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Take as a parameter a node and frees the memory of the node’s `content`
///	using the `deleter` function given as a parameter and free the node.
///The memory of `next` must not be set free.
///@param	node	The node to free.
///@param	deleter	The addres of the function used to delete the `content`.
///@remark	External function: `free`.
void	ft_lstdelone(t_node *const node, void (*const deleter)(const void *))
{
	t_node	*next_node;

	if (! node)
		return ;
	deleter(node->content);
	next_node = node->next;
	free((t_node *){node});
	node = next_node;
}
