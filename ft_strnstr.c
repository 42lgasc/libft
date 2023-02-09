/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:08:42 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/04 16:28:05 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *string);

char	*ft_strnstr(const char *big, const char *little, t_size length)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	while (i <= ft_strlen(big) - ft_strlen(little)
		&& i <= length - ft_strlen(little))
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (big[i + j] == little[j])
			{
				j++;
				if (little[j] == '\0')
					return ((char *) &big[i]);
			}
		}
		i++;
	}
	return ((void *) 0);
}
