/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:57:12 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 18:01:23 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

///Applies   the `iterator` function on each character of the `string` passed as
///	argument, passing its index as first argument. Each character is  passed  by
///	address to the `iterator` function to be modified if necessary.
///@param[in,out]	string		The string on which to iterate.
///@param[in]		iterator	The function to apply to each character.
void	ft_striteri(
	const char *const string, void (*const iterator)(size_t, const char *))
{
	size_t	i;

	if (! string || ! iterator)
		return ;
	i = 0;
	while (string [i])
	{
		iterator(i, string + i);
		++ i;
	}
}
