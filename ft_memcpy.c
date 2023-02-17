/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:50:02 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:36:36 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @remark This function aims to replicate the `libc` function `memcpy`. */
void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *const) destination)[i] = ((char *const) source)[i];
		i++;
	}
	return (destination);
}
