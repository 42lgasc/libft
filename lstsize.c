/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:28:09 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 13:07:14 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Counts the number of nodes in a list.
///@param	list	The beginning of the list.
///@return	The length of the list.
__attribute__	((warn_unused_result))
size_t	ft_lstsize(const t_node *const list)
{
	const t_node	*next_link;
	size_t			size;

	next_link = list;
	size = 0;
	while (next_link)
	{
		++ size;
		next_link = next_link->next;
	}
	return (size);
}
