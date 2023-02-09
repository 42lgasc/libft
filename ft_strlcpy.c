/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:24:41 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/03 13:32:17 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *string);
void	*ft_memmove(void *destination, const void *source, t_size n);

t_size	ft_strlcpy(char *destination, const char *source, t_size size)
{
	if (ft_strlen(source) + 1 < size)
		ft_memmove(destination, source, ft_strlen(source));
	else
		ft_memmove(destination, source, size);
	destination[size] = '\0';
	return (ft_strlen(source));
}
