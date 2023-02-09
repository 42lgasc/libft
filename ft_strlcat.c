/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:09:25 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/03 16:54:38 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *string);
void	*ft_memmove(void *destination, const void *source, t_size n);

/** @see https://stackoverflow.com/a/33155352 */
t_size	ft_strlcat(char *destination, const char *source, t_size size)
{
	t_size	old_destination_size;

	if (size <= ft_strlen(destination) + 1)
		return (size + ft_strlen(source));
	old_destination_size = ft_strlen(destination);
	if (ft_strlen(source) <= size - 1 - old_destination_size)
		ft_memmove(&destination[old_destination_size], source,
			ft_strlen(source));
	else
	{
		ft_memmove(&destination[old_destination_size], source,
			size - old_destination_size - 1);
		destination[size -1] = '\0';
	}
	return (old_destination_size + ft_strlen(source));
}
