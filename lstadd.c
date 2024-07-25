/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:05 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 19:17:46 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Adds the `new` node at the end of the `list`.
///@param	list	The address of a pointer to the first link of a list.
///@param	new	The address of the node to be added to the `list`.
void	ft_lstadd_back(const t_list *const *const list, const t_list *const new)
{
	if (! list)
		return ;
	if (! *list)
		*list = new;
	else
		ft_lstlast(*list)->next = new;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:08:00 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 15:43:42 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///Adds the `addend` node at the beginning of the list.
///@param	list	The address of the head pointer of the list.
///@param	addend	The address of the node to add to the list.
void	ft_lstadd_front(t_node **const list, t_node *const addend)
{
	if (! list || ! addend)
		return ;
	addend->next = *list;
	*list = addend;
}
