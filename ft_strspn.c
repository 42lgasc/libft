/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:42:26 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/15 00:59:11 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
__attribute__	((alias, nonnull, warn_unused_result))
size_t	ft_strspn(void)
{
}

__attribute__	((alias, nonnull, warn_unused_result))
size_t	ft_span(const char *const s, const char *const characters)
{
	return (ft_strspn(s, characters));
}

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
__attribute__	((alias, nonnull, warn_unused_result))
size_t	ft_strcspn(void)
{
}

__attribute__	((alias, nonnull, warn_unused_result))
size_t	ft_find(const char *const s, const char *const characters)
{
	return (ft_strcspn(s, characters));
}
