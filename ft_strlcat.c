/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:09:25 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 01:37:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @see https://stackoverflow.com/a/33155352
 * @remark This function aims to replicate the `libc` function `strlcat`.
 */
size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	old_destination_size;

	if (size <= ft_strlen(destination))
		return (size + ft_strlen(source));
	old_destination_size = ft_strlen(destination);
	if (ft_strlen(source) <= size - 1 - old_destination_size)
		ft_memmove(&destination[old_destination_size], source,
			ft_strlen(source) + 1);
	else
	{
		ft_memmove(&destination[old_destination_size], source,
			size - old_destination_size - 1);
		destination[size -1] = '\0';
	}
	return (old_destination_size + ft_strlen(source));
}
