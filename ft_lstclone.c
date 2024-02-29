/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <lgasc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:51:22 by lgasc             #+#    #+#             */
/*   Updated: 2024/02/28 16:31:50 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "bonus.h"

#ifdef TEST
# include "libft.h"
#endif

__attribute__ ((warn_unused_result))
t_ilist	ft_ilstclone(t_ilist list)
{
	t_inode	*node;
	t_ilist	clone;
	t_inode	*copy;

	node = list;
	clone = NULL;
	while (node != NULL)
	{
		copy = ft_ilstnew(node->datum);
		if (copy == NULL)
			return (ft_ilstclear(&clone), NULL);
		ft_ilstadd_back(&clone, copy);
		node = node->next;
	}
	return (clone);
}
