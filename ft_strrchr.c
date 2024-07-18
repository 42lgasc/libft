/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:17:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 00:15:35 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `strrchr`.
char	*ft_strrchr(const char *const string, const char c)
{
	size_t		i;
	const char	*match;

	if (! string)
		return ((char *){NULL});
	i = 0;
	match = (char *){NULL};
	while (string [i])
	{
		if (string [i] == c)
			match = string + i;
		++ i;
	}
	if (c == '\0')
		match = string + i;
	return ((char *)(const char *){match});
}
