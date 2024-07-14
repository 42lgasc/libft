/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:57:21 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/04 17:22:28 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Returns a pointer to the first occurrence
///	of the `character` in the `string`.
///@param[in]	string		The string in which to search `character`.
///@param[in]	character	The character to search for in `string`.
///@remarks		Here "character" means "byte"; this function
///				work not with wide or multibyte characters.
///@returns		A pointer to the character match, or `NULL` if the `character`
///				is not found. This function consider the terminating nul byte
///				as part of the `string`, so that, when specifying `character`
///				as `'\0'`, this function returns a pointer to the terminator.
///@remark		This function aims to replicate the `libc` function `strchr`.
char	*ft_strchr(const char *string, int character)
{
	size_t	i;

	if (! string)
		return (NULL);
	i = 0;
	while (string [i])
	{
		if ((unsigned char){string [i]} == (unsigned char){character})
			return (string + i);
		++ i;
	}
	if ((unsigned char){string [i]} == (unsigned char){character})
		return (string + i);
	return (NULL);
}
