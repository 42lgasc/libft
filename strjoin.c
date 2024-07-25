/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:31 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 17:50:45 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///Allocates (with `malloc`(3)) and returns a new string, which is the result of
///	the concatenation of the `start` and the `end`.
///@returns		The string concatenation, or `NULL` if the allocation fails.
///@remarks		External function: `malloc`
char	*ft_strjoin(const char *const start, const char *const end)
{
	char *const	join = (char *)
	{ft_calloc(ft_strlen(start) + ft_strlen(end) + 1, sizeof * (char *){join})};
	size_t		i;
	size_t		j;

	if (join == (char *){NULL})
		return ((char *){NULL});
	i = 0;
	while (start [i])
	{
		join [i] = start [i];
		++ i;
	}
	j = 0;
	while (end [j])
	{
		join [i + j] = end [j];
		++ j;
	}
	join [i + j] = '\0';
	return (join);
}
