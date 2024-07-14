/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:17:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/15 00:47:46 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `strrchr`.
char	*ft_strrchr(const char *const string, const int character)
{
	size_t		i;
	const char	*match;

	if (! string)
		return ((char *){NULL});
	i = 0;
	match = (char *){NULL};
	while (string [i])
	{
		if ((unsigned char){string [i]} == (unsigned char){character})
			match = string + i;
		++ i;
	}
	if ((unsigned char){string [i]} == (unsigned char){character})
		match = string + i;
	return (match);
}
