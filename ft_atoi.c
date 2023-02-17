/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:28:25 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:43:46 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @remark This function aims to replicate the `libc` function `atoi`. */
int	ft_atoi(const char *string)
{
	unsigned int	i;
	signed char		sign;
	int				number;

	i = 0;
	while (('\t' <= string[i] && string[i] <= '\r') || string[i] == ' ')
		i++;
	sign = 1;
	if (string[i] == '-')
		sign = -1;
	if (string[i] == '+' || string[i] == '-')
		i++;
	number = 0;
	while (1)
	{
		if (! ft_isdigit(string[i]))
			return (number);
		number = number * 10 + sign * (string[i] - '0');
		i++;
	}
}
