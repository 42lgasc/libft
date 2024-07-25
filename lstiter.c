/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:44:41 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 16:02:11 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Iterates the `list` and applies the `function` on the content of each node.
///@param	list		The address of a node.
///@param	function	The address of the function
///						used to iterate on the `list`.
void	ft_lstiter(t_node *const list, void (*action)(const void *))
{
	t_node	*node;

	node = list;
	while (node != (t_node *){NULL})
	{
		function(node->content);
		node = node->next;
	}
}
