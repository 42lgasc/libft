/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:40:37 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 18:30:37 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static size_t	ft_count_subtrings(const char *superstring, char delimiter)
				__attribute__	((nonnull,	warn_unused_result));
static bool		ft_allocate_substrings(
					const char *whole, char delimiter, const char **array)
				__attribute__	((nonnull, warn_unused_result));
static void		ft_set_substrings(const char *whole, char delimiter,
					char *const *array)	__attribute__	((nonnull));

///Allocates  (with  `malloc`(3))  and  returns  an array of strings obtained by
///	splitting the `whole` using a `delimiter` character.
///The array must end with a `NULL` pointer.
///@param[in]	whole		The string to be split.
///@param[in]	delimiter	The delimiter character.
///@returns		The array of new strings resulting from the split,
///				or `NULL` if the allocation fails.
///@remarks		External functions: `malloc`, `free`
char	**ft_split(const char *const whole, const char delimiter)
{
	char		**split;
	char *const	*substring;

	split = (char **){ft_calloc
		(ft_count_subtrings(whole, delimiter) + 1, sizeof * (char **){split})};
	if (! split)
		return ((char **){NULL});
	split [ft_count_subtrings(whole, delimiter)] = (char *){NULL};
	if (ft_allocate_substrings
		(whole, delimiter, (const char **)(char **){split}) == true)
	{
		substring = split;
		while (*substring != (char *){NULL})
		{
			free((char *){*substring});
			++ substring;
		}
		free((char **){split});
		return ((char **){NULL});
	}
	ft_set_substrings(whole, delimiter, split);
	return (split);
}

static size_t	ft_count_subtrings(
	const char *const superstring, const char delimiter)
{
	const char	*si;
	bool		in_substring;
	size_t		count;

	si = superstring;
	in_substring = true;
	count = 0;
	while (*si != '\0')
	{
		if (in_substring && *si == delimiter)
			in_substring = false;
		else if (! in_substring && *si != delimiter)
		{
			in_substring = true;
			++ count;
		}
		++ si;
	}
	return (count);
}

///@returns	An error code: 0 means no errors; 1 means allocation error.
static bool	ft_allocate_substrings(
	const char *const whole, const char delimiter, const char **const array)
{
	const char	*wi;
	bool		at_delimiter;
	const char	**si;

	wi = whole;
	at_delimiter = true;
	si = array;
	while (*wi != '\0')
	{
		if (! at_delimiter && *wi == delimiter)
			at_delimiter = true;
		else if (at_delimiter && *wi != delimiter)
		{
			*si = (const char *){ft_calloc(ft_find(wi, (char [2])
					{delimiter, '\0'}) + 1, sizeof * (const char *){*si})};
			if (*si ++ == (char *){NULL})
				return (true);
			at_delimiter = false;
		}
		++ wi;
	}
	return (false);
}

void	ft_set_substrings(
	const char *const whole, const char delimiter, char *const *const split)
{
	const char	*wi;
	bool		in_substring;
	char *const	*substring;
	size_t		j;

	wi = whole;
	in_substring = false;
	substring = split;
	while (*wi != '\0')
	{
		if (in_substring && *wi == delimiter)
			in_substring = false;
		else if (! in_substring && *wi != delimiter)
		{
			j = 0;
			while (wi [j] != '\0' && wi [j] != delimiter)
			{
				(*substring)[j] = wi [j];
				++ j;
			}
			(*substring ++)[j] = '\0';
			in_substring = true;
		}
		++ wi;
	}
}
