/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:08:42 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 18:30:01 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///The   `ft_strnstr()`   function   locates   the   first   occurrence  of  the
///	`NULL`-terminated `little` string in the `big` string, where  no  more  than
///	`length` characters are searched.
///Characters that appear after a `'\0'` character are not searched.
///@param	big		The string where inside which `little` is searched.
///@param	little	The string to search inside `big`.
///@param	length	The maximum number of characters to be searched.
///@return	If  `little`  is  an  empty  string,  `big` is returned; if `little`
///			occurs nowhere in `big`, `NULL` is returned; otherwise a pointer  to
///			the first character of the first occurrence of little is returned.
///@remark	This function aims to replicate the `libc` function `strnstr`.
///@see		Beware of signedness: https://stackoverflow.com/a/5416724
const char	*ft_strnstr(
	const char *const big, const char *const little, const size_t length)
{
	const char	*start;
	size_t		j;

	if (little && little [0] == '\0')
		return (big);
	if (! big || ! little || ft_strlen(big) < ft_strlen(little)
		|| length < ft_strlen(little))
		return ((char *){NULL});
	start = big;
	while ((size_t){start - big} <= ft_strlen(big) - ft_strlen(little)
		&& (size_t){start - big} <= length - ft_strlen(little))
	{
		if (*start == little [0])
		{
			j = 0;
			while (start [j] == little [j])
			{
				++ j;
				if (little [j] == '\0')
					return (start);
			}
		}
		++ start;
	}
	return ((char *){NULL});
}
