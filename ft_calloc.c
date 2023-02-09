/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:58 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/06 17:44:56 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include "libft.h"

/** @see https://stackoverflow.com/a/1815391 */
void	*ft_calloc(t_size member_amount, t_size member_size)
{
	unsigned int	i;
	void			*array;

	if (member_amount == 0 || member_size == 0)
		return (malloc(0));
	if (member_amount > 2147483647 / member_size)
	{
		errno = ENOMEM;
		return ((void *) 0);
	}
	array = malloc(member_amount * member_size);
	i = 0;
	while (i < member_amount * member_size)
	{
		((char *) array)[i] = 0;
		i++;
	}
	return (array);
}
