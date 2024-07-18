/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:42:26 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/18 03:46:51 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///	man 3 strspn
///>## Description
///>The **`strspn`**`()` function calculates the length (in bytes) of the
///>	initial segment of _`s`_ which consists entirely of bytes in _`accept`_.
///>
///>## Return Value
///>The **`strspn`**`()` function returns the number of bytes in the initial
///>	segment of _`s`_ which consist only of bytes from _`accept`_.
///
///	man 3posix strspn
///>The _`strspn`_`()` function shall compute the length (in bytes) of the
///>	maximum initial segment of the string pointed to by _`s1`_ which
///>	consists entirely of bytes from the string pointed to by _`s2`_.
///>
///>## Return Value
///>The _`strspn`_`()` function shall return the computed length;
///>	no return value is reserved to indicate an error.
///>
///>## Errors
///>No errors are defined.
__attribute__	((nonnull,	warn_unused_result))
size_t	ft_strspn(const char *const s, const char *const set)
{
	size_t	i;

	i = 0;
	while (s [i] != '\0' && ft_strchr(set, s [i]))
		++ i;
	return (i);
}

size_t	ft_span(const char *const s, const char *const characters)
		__attribute__	((alias	("ft_strspn"),	nonnull, warn_unused_result));

///	man 3 strspn
///>## Description
///>The **`strcspn`**`()` function calculates the length of the initial
///>	segment of _`s`_ which consists entirely of bytes not in _`reject`_.
///>
///>## Return Value
///>The **`strcspn`**`()` function returns the number of bytes in the
///>	initial segment of _`s`_ which are not in the string _`reject`_.
///
///	man 3posix strcspn
///>## Description
///>The _`strcspn`_`()` function shall compute the length (in bytes) of the
///>	maximum initial segment of the string pointed to by _`s1`_ which
///>	consists entirely of bytes _not_ from the string pointed to by _`s2`_.
///>
///>## Return Value
///>The _`strcspn`_`()` function shall return the length of the
///>	computed segment of the string pointed to by _`s1`_;
///>	no return value is reserved to indicate an error.
// `ft_strchr` considers `'\0'` to be part of string
__attribute__	((nonnull,	warn_unused_result))
size_t	ft_strcspn(const char *const s, const char *const any)
{
	size_t	i;

	i = 0;
	while (! ft_strchr(any, s [i]))
		++ i;
	return (i);
}

size_t	ft_find(const char *const s, const char *const characters)
		__attribute__	((alias	("ft_strcspn"),	nonnull, warn_unused_result));

__attribute__	((nonnull,	warn_unused_result))
size_t	ft_rspan(const char *const s, const char *const set)
{
	const size_t	length = ft_strlen(s);
	size_t			i;

	i = 0;
	while (i < length && ft_strchr(set, s [length - 1 - i]))
		++ i;
	return (i);
}

__attribute__	((nonnull,	warn_unused_result))
size_t	ft_rfind(const char *const s, const char *any)
{
	const size_t	length = ft_strlen(s);
	size_t			i;

	i = 0;
	while (i < length && ! ft_strchr(any, s [length - 1 - i]))
		++ i;
	return (i);
}
