/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:07:56 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 17:24:19 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	locate_trim(const char *scruffy, const char *blade,
				const char **start, const char **end) __attribute__	((nonnull));
static void	hydrate_trim(const char *start, const char *end, char *trim)
			__attribute__	((nonnull));

///Allocates (with `malloc`(3)) and returns a copy of `scruffy` minus characters
///	of the `blade` present at the beginning and the end of the string.
///@param [in]	scruffy	The string to trim from.
///@param [in]	blade	The reference set of characters to trim.
///@returns		The string after trim. `NULL` if the allocation fails.
///@remarks		External function: `malloc`
char	*ft_strtrim(const char *const scruffy, const char *const blade)
{
	const char	*start;
	const char	*end;
	char		*trim;

	locate_trim(scruffy, blade, & start, & end);
	if (*start == '\0')
		return (ft_strdup(""));
	trim = (char *){ft_calloc(end - start + 1, sizeof * (char *){trim})};
	if (trim == (char *){NULL})
		return ((char *){NULL});
	hydrate_trim(start, end, trim);
	return (trim);
}

///@param [in]	scruffy
///@param [in]	blade
///@param [out]	start
///@param [out]	end
static void	locate_trim(const char *const scruffy, const char *const blade,
	const char **const start, const char **const end)
{
	*start = scruffy + ft_span(scruffy, blade);
	*end = scruffy + ft_strlen(scruffy) - ft_rspan(scruffy, blade);
}

///@param [in]	scruffy
///@param [in]	start
///@param [in]	end
///@param [out]	trim
static void	hydrate_trim(const char *const start,
	const char *const end, char *const trim)
{
	size_t	i;

	i = 0;
	while (start + i < end)
	{
		trim [i] = start [i];
		++ i;
	}
	trim [i] = '\0';
}
