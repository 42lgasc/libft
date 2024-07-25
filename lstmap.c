/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:59:30 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 16:19:11 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_node	*ft_new_list_skeleton(size_t size)
				__attribute__	((warn_unused_result));
static void		ft_hydrate_list(const t_node *source,
					const void *(*mapper)(const void *), t_node *destination)
				__attribute__	((nonnull));

///Iterates the `original` list and applies the `function` on
///	the content of each node, and creates a new `map` list
///	of the successive applications of the `mapper` function.
///The `deleter` function is used to delete the content of a node if needed.
///@param	original	The address of a pointer to a node.
///@param	mapper		The address of a function used to
///							iterate on the `original` list.
///@param	deleter		The address of a function used to delete
///							the `content` of a node if needed.
///@return	The new `map` list. `NULL` if the allocation fails.
///@remark	External functions: `malloc`, `free`.
///@remark	This function assumes that `NULL` being returned
///				by the `mapper` function is just a normal
///				(valid) value, and not some kind of error code.
///`deleter`? I barely know her!
///DEL-EAT DEEZ
t_node	*ft_lstmap(const t_node *const original, const void *const (*const
	ft_mapper)(const void *const), void (*const ft_deleter)(const void *const))
{
	t_node	*map;

	if (! original || ! ft_mapper || ! ft_deleter)
		return (NULL);
	map = ft_new_list_skeleton(ft_lstsize(original));
	if (! map)
		return ((t_node *){NULL});
	ft_hydrate_list(original, mapper, map);
	return (map);
}

static t_node	*ft_new_list_skeleton(const size_t size)
{
	size_t	i;
	t_node	*skeleton;
	t_node	*node;

	i = 0;
	skeleton = (t_node *){NULL};
	while (i < size)
	{
		node = ft_lstnew((const double *){NULL});
		if (node == (t_node *){NULL})
		{
			ft_lstclear(& skeleton, ft_vnoop);
			return ((t_node *){NULL});
		}
		else
			ft_lstadd_back(& skeleton, node);
		++ i;
	}
	return (skeleton);
}

static void	ft_hydrate_list(const t_list *const source,
	const void *(*const ft_mapper)(const void *), t_node *const destination)
{
	t_node			*destination_link;
	const t_node	*source_link;

	if (! source || ! ft_mapper || ! destination)
		return ;
	destination_link = destination;
	source_link = source;
	while (destination_link)
	{
		destination_link->content = ft_mapper(source_link->content);
		destination_link = destination_link->next;
		source_link = source_link->next;
	}
}
