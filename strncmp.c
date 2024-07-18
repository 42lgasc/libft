/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:13:45 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 00:19:59 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark This function aims to replicate the `libc` function `strncmp`.
__attribute__	((nonnull,	warn_unused_result))
int	ft_strncmp(const unsigned char *const subject,
	const unsigned char *const reference, const size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (subject [i] != reference [i])
			return (subject [i] - reference [i]);
		if (subject [i] == '\0')
			return (0);
		++ i;
	}
	return (0);
}
