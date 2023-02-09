/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:17:13 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/03 13:30:29 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, t_size n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (destination < source)
			((char *) destination)[n - i - 1]
				= ((const char *) source)[n - i - 1];
		else
			((char *) destination)[i] = ((const char *) source)[i];
		i++;
	}
	return (destination);
}
