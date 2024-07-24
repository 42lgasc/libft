/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:24:41 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/24 21:12:34 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `strlcpy`.
size_t	ft_strlcpy(
	char *const destination, const char *const source, const size_t size)
{
	if (! destination || ! source)
		return (0);
	if (ft_strlen(source) + 1 < size)
		ft_memmove(destination, source, ft_strlen(source) + 1);
	else if (size > 0)
	{
		ft_memmove(destination, source, size - 1);
		destination [size] = '\0';
	}
	return (ft_strlen(source));
}
