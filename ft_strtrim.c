/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:07:56 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/20 15:12:18 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** Allocates (with malloc(3)) and returns a copy of
 * 	`scruffy` with the characters specified in `blade` removed from
 * 	the beginning and the end of the string.
 * @param[in] scruffy The string to be trimmed.
 * @param[in] blade The reference set of characters to trim.
 * @returns The trimmed string. NULL if the allocation fails.
 * @remarks External function: `malloc`
 */
char	*ft_strtrim(char const *scruffy, char const *blade)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*trim;

	i = 0;
	while (ft_strchr(blade, scruffy[i]) && i <= ft_strlen(scruffy))
		i++;
	j = ft_strlen(scruffy);
	while (i < j && ft_strchr(blade, scruffy[j]))
		j--;
	trim = ft_calloc(2 + j - i, sizeof * trim);
	if (trim == NULL)
		return (NULL);
	k = 0;
	while (i + k <= j)
	{
		trim[k] = scruffy[i + k];
		k++;
	}
	trim[k] = '\0';
	return (trim);
}
