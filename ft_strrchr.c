/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:17:29 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:42:41 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @remark This function aims to replicate the `libc` function `strrchr`. */
char	*ft_strrchr(const char *string, int character)
{
	unsigned int	i;
	const char		*match;

	i = 0;
	match = NULL;
	while (string[i])
	{
		if (string[i] == character)
			match = &string[i];
		i++;
	}
	if (string[i] == character)
		match = &string[i];
	return ((char *const) match);
}
