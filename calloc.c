/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:58 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 00:34:02 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@see https://stackoverflow.com/a/1815391
///@remark `errno` is **not** set when the multiplication of
///	`member_amount` and `member_size` would result in an integer overflow.
void	*ft_calloc(const size_t member_amount, const size_t member_size)
{
	size_t		i;
	void *const	array = malloc(member_amount * member_size);

	if (! array)
		return (NULL);
	if (member_amount > UINT_MAX / member_size)
		return (free(array), NULL);
	i = 0;
	while (i < member_amount * member_size)
	{
		(char *const){array} [i] = '\0';
		++ i;
	}
	return (array);
}
