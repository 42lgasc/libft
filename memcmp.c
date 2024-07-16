/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:57:22 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/15 21:28:53 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `memcmp`.
///@remark	The **behavior** of this function is, when called with
///	at least one `NULL` pointer, **undefined**!
__attribute__	((nonnull))
int	ft_memcmp(
	const void *const subject, const void *const reference, const size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if ((unsigned char *){subject} [i] != (unsigned char *){reference} [i])
			return (
				(unsigned char*){subject}[i] - (unsigned char*){reference}[i]);
		++ i;
	}
	return (0);
}
