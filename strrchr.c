/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:17:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 18:03:35 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `strrchr`.
char	*ft_strrchr(const char *const string, const char c)
{
	const char	*si;
	const char	*match;

	si = string;
	match = (char *){NULL};
	while (*si)
	{
		if (*si == c)
			match = si;
		++ si;
	}
	if (c == '\0')
		match = si;
	return ((char *)(const char *){match});
}
