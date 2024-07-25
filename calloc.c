/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:58 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 18:11:16 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@see https://stackoverflow.com/a/1815391
///@remark `errno` is **not** set when the multiplication of
///	`member_amount` and `member_size` would result in an integer overflow.
void	*ft_calloc(const size_t member_amount, const size_t member_size)
{
	void *const	array = malloc(member_amount * member_size);
	char		*i;

	if (! array)
		return ((double *){NULL});
	if (member_amount > UINT_MAX / member_size)
		return (free((void *){array}), (void *){NULL});
	i = array;
	while ((size_t){i - (char *){array}} < member_amount * member_size)
	{
		*i = '\0';
		++ i;
	}
	return (array);
}
