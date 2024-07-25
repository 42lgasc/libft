/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:28:25 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 18:28:47 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark This function aims to replicate the `libc` function `atoi`.
__attribute__	((nonnull,	warn_unused_result))
int	ft_atoi(const char *const ascii)
{
	const char	*si;
	signed char	sign;
	int			integer;

	si = ascii;
	while (('\t' <= *si && *si <= '\r') || *si == ' ')
		++ si;
	sign = 1;
	if (*si == '-')
		sign = -1;
	if (*si == '+' || *si == '-')
		++ si;
	integer = 0;
	while (ft_isdigit(*si))
		integer = integer * 10 + sign * (*si ++ - '0');
	return (integer);
}
