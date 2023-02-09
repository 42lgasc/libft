/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:31 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/06 18:21:27 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *string);
void	*ft_calloc(t_size member_amount, t_size member_size);

/** Allocates (with malloc(3)) and returns a new string,
 * which is the result of the concatenation of `string1` and `string2`.
 * @param[in] string1 The prefix string.
 * @param[in] string2 The suffix string.
 * @returns The new string. NULL if the allocation fails.
 * @remarks External function: `malloc`
 */
char	*ft_strjoin(char const *string1, char const *string2)
{
	char			*join;
	unsigned int	i;
	unsigned int	j;

	join = ft_calloc(
			ft_strlen(string1) + ft_strlen(string2) + 1, sizeof * join);
	if (join == (void *) 0)
		return ((void *) 0);
	i = 0;
	while (string1[i])
	{
		join[i] = string1[i];
		i++;
	}
	j = 0;
	while (string2[j])
	{
		join[i + j] = string2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
