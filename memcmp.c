/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:57:22 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 00:30:07 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `memcmp`.
///@remark	The **behavior** of this function is, when called with
///	at least one `NULL` pointer, **undefined**!
__attribute__	((nonnull,	warn_unused_result))
int	ft_memcmp(const unsigned char *const subject,
	const unsigned char *const reference, const size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (subject [i] != reference [i])
			return (subject [i] - reference [i]);
		++ i;
	}
	return (0);
}
