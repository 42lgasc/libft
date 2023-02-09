/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:59:52 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/08 16:21:54 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(t_size member_amount, t_size member_size);
static unsigned int	power(unsigned int base, unsigned int exponent);

/** Allocates (with malloc(3)) and returns a string representing the
 * `integer` received as an argument. Negative numbers must be handled.
 * @param[in] integer The integer to convert.
 * @returns The string representing the integer. NULL if the allocation fails.
 * @remarks External funtion: `malloc`
 */
char	*ft_itoa(int integer)
{
	signed char		sign;
	unsigned int	length;
	char			*string;
	unsigned int	i;

	sign = 1;
	if (integer < 0)
		sign = -1;
	length = 1;
	while (integer / power(10, length) != 0)
		length++;
	string = ft_calloc(length + ((sign - 1) / -2), sizeof * string);
	i = 0;
	if (sign < 0)
		string[0] = '-';
	while (i < length)
	{
		string[i + ((sign - 1) / 2)]
			= '0' + (integer / power(10, length - 1 - i));
		i++;
	}
	string[length + ((sign - 1) / 2)] = '\0';
	return (string);
}

static unsigned int	power(unsigned int base, unsigned int const exponent)
{
	if (exponent == 0)
		return (1);
	return (base * power(base, exponent - 1));
}
