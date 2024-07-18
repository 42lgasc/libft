/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:20:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 03:48:24 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

static size_t	power(size_t base, size_t exponent);

///Outputs the `character` to the given `file_descriptor`.
///@param[in]	character		The character to output.
///@param[in]	file_descriptor	The file descriptor on which to write.
///@remarks		External function: `write`
//__attribute__	((fd_arg))
void	ft_putchar_fd(const char character, const int file_descriptor)
{
	write(file_descriptor, & character, 1);
}

///Outputs the `string` to the given `file_descriptor`.
///@param[in]	string			The string to output.
///@param[in]	file_descriptor	The file descriptor on which to write.
///@remarks		External function: `write`
//__attribute__	((fd_arg))
void	ft_putstr_fd(const char *const string, const int file_descriptor)
{
	if (! string)
		return ;
	write(file_descriptor, string, ft_strlen(string));
}

///Outputs the `string` to the given `file_descriptor` followed by a newline.
///@param[in]	string			The string to output.
///@param[in]	file_descriptor	The file descriptor on which to write.
///@remarks		External function: `write`
//__attribute__	((fd_arg))
void	ft_putendl_fd(const char *const string, const int file_descriptor)
{
	ft_putstr_fd(string, file_descriptor);
	write(file_descriptor, "\n", 1);
}

///Outputs the integer `integer` to the given `file_descriptor`.
///@param[in]	integer			The integer to output.
///@param[in]	file_descriptor	The file descriptor on which to write.
///@remarks		External function: `write`
//__attribute__ ((fd_arg	(2)))
void	ft_putnbr_fd(const int integer, const int file_descriptor)
{
	size_t		length;
	size_t		i;
	signed char	sign;

	sign = 1;
	if (integer < 0)
	{
		sign = -1;
		write(file_descriptor, "-", 1);
	}
	length = 1;
	while (integer / (ssize_t){power(10, length - 1)} <= -10
		|| integer / (ssize_t){power(10, length - 1)} >= 10)
		++ length;
	i = 0;
	while (i < length)
	{
		write(file_descriptor, & "0123456789"
		[(integer / (ssize_t){power(10, length - 1 - i)}) % 10 * sign], 1);
		++ i;
	}
}

static size_t	power(const size_t base, const size_t exponent)
{
	if (exponent == 0)
		return (1);
	return (base * power(base, exponent - 1));
}
