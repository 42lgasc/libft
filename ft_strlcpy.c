/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:24:41 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 03:40:03 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @remark This function aims to replicate the `libc` function `strlcpy`. */
size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	if (ft_strlen(source) + 1 < size)
		ft_memmove(destination, source, ft_strlen(source) + 1);
	else if (size > 0)
	{
		ft_memmove(destination, source, size - 1);
		destination[size - 1] = '\0';
	}
	return (ft_strlen(source));
}
