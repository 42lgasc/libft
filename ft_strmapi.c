/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:08:15 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 01:42:39 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Applies the `action` parameter to each character of the `source` string,
///	whose index is given as first argument to create a new string (with
///	`malloc`(3)) resulting from successive applications of the `action`.
///@param[in]	source	The string on which to iterate.
///@param[in]	action	The function to apply to each character.
///@returns		The string created from the successive applications of
///				`mapper` function. Returns NULL if the allocation fails.
///@remarks		External function: `malloc`
char	*ft_strmapi(char const *source, char (*action)(size_t, char))
{
	char	*map;
	size_t	i;

	if (! source || ! action)
		return ((char *){NULL});
	map = (char *){ft_calloc(ft_strlen(source) + 1, sizeof * (char *){map})};
	if (! map)
		return ((char *){NULL});
	i = 0;
	while (source [i])
	{
		map [i] = action(i, source [i]);
		++ i;
	}
	map [i] = '\0';
	return (map);
}
