/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:59:52 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/22 17:22:53 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	power(unsigned int base, unsigned int exponent);

static void			hydrate_string(const int integer, const signed char sign,
						const unsigned char length, char *const string);

/** Allocates (with malloc(3)) and returns a string representing the
 * `integer` received as an argument. Negative numbers must be handled.
 * 
 * @param[in] integer The integer to convert.
 * 
 * @returns The string representing the integer. NULL if the allocation fails.
 * 
 * @remarks External funtion: `malloc`
 */
char	*ft_itoa(int integer)
{
	signed char		sign;
	unsigned int	length;
	char			*string;

	sign = 1;
	if (integer < (signed) 0)
		sign = -1;
	length = 1;
	while (integer / (signed int) power(10, length - 1) <= -10
		|| integer / (signed int) power(10, length - 1) >= 10)
		length++;
	string = ft_calloc(length + 1 + ((sign - 1) / -2), sizeof * string);
	if (! string)
		return (NULL);
	hydrate_string(integer, sign, length, string);
	return (string);
}

static unsigned int	power(unsigned int base, unsigned int const exponent)
{
	if (exponent == 0)
		return (1);
	return (base * power(base, exponent - 1));
}

/**
 * @param[in] integer
 * @param[in] sign
 * @param[in] length
 * @param[out] string
 */
static void	hydrate_string(const int integer, const signed char sign,
				const unsigned char length, char *const string)
{
	unsigned int	i;

	i = 0;
	if (sign < (signed) 0)
		string[0] = '-';
	while (i < length)
	{
		string[i + ((sign - 1) / -2)] = '0'
			+ ((integer / (signed int) power(10, length - 1 - i)) % 10 * sign);
		i++;
	}
	string[length + ((sign - 1) / -2)] = '\0';
}
