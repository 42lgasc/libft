/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:17:13 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 16:56:53 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark This function aims to replicate the `libc` function `memmove`.
void	*ft_memmove(
	void *const destination, const void *const source, const size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (source < destination)
			(char *const){destination}[n - i - 1]
				= (const char *const){source}[n - i - 1];
		else
			(char *const){destination}[i]
				= (const char *const){source}[i];
		++ i;
	}
	return (destination);
}
