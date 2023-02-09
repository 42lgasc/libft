/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:50:02 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/03 13:22:46 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, t_size n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *) destination)[i] = ((const char *) source)[i];
		i++;
	}
	return (destination);
}
