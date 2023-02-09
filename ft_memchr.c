/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:27:12 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/04 12:56:55 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, unsigned char character, t_size n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == character)
			return ((void *) &s[i]);
		i++;
	}
	return ((void *) 0);
}
