/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:50:02 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 16:55:59 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark This function aims to replicate the `libc` function `memcpy`.
void	*ft_memcpy(
	void *const destination, const void *const source, const size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		(char *const){destination}[i] = (const char *const){source}[i];
		++ i;
	}
	return (destination);
}
