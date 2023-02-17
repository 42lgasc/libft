/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:08:15 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/10 16:15:02 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** Applies the `function` to each character of the `original` string, and
 * 	passing its index as first argument to create a new string (with
 * 	malloc(3)) resulting from successive applications of `function`.
 * @param[in] original The string on which to iterate.
 * @param[in] function The function to apply to each character.
 * @returns The string created from the successive applications of `function`.
 * 	Returns NULL if the allocation fails.
 * @remarks External function: `malloc`
 */
char	*ft_strmapi(char const *original, char (*function)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	map = ft_calloc(ft_strlen(original) + 1, sizeof * map);
	i = 0;
	while (original[i])
	{
		map[i] = function(i, original[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
