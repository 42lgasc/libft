/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:57:22 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:35:24 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @remark This function aims to replicate the `libc` function `memcmp`. */
int	ft_memcmp(const void *string1, const void *string2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((const unsigned char *const) string1)[i]
			!= ((const unsigned char *const) string2)[i])
			return (((const unsigned char *const) string1)[i]
				- ((const unsigned char *const) string2)[i]);
		i++;
	}
	return (0);
}
