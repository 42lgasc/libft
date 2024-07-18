/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:27:12 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 00:26:52 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark This function aims to replicate the `libc` function `memchr`.
void	*ft_memchr(const void *const s, const unsigned char c, const size_t n)
{
	size_t	i;

	if (! s)
		return ((void *){NULL});
	i = 0;
	while (i < n)
	{
		if ((const unsigned char *){s}[i] == c)
			return ((unsigned char *)(const unsigned char *){s} + i);
		++ i;
	}
	return (NULL);
}
