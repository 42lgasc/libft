/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:07:56 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/15 00:57:55 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

static void	locate_trim(const char *scruffy, const char *blade,
				size_t *start, size_t *end);
static void	hydrate_trim(const char *scruffy,
				size_t start, size_t end, char *trim);

///Allocates (with `malloc`(3)) and returns a copy of `scruffy` minus characters
///	of the `blade` present at the beginning and the end of the string.
///@param [in]	scruffy	The string to trim from.
///@param [in]	blade	The reference set of characters to trim.
///@returns		The string after trim. `NULL` if the allocation fails.
///@remarks		External function: `malloc`
char	*ft_strtrim(const char *const cruffy, const char *const blade)
{
	size_t		start;
	size_t		end;
	char *const	trim
		= (scruffy && blade && locate_trim(scruffy, blade, & start, & end),
			(char *){ft_calloc(end - start + 2, sizeof * (char *){trim})});

	if (trim == (char *){NULL})
		return ((char *){NULL});
	if (! scruffy)
		return (free((char *){trim}), (char *){NULL});
	if (! blade)
		return (free((char *){trim}), ft_strdup(scruffy));
	hydrate_trim(scruffy, start, end, trim);
	return (trim);
}

///@param [in]	scruffy
///@param [in]	blade
///@param [out]	start
///@param [out]	end
static void	locate_trim(const char *const scruffy,
	const char *const blade, size_t *const start, size_t *const end)
{
	*start = 0;
	while (ft_strchr(blade, scruffy [*start]) && *start <= ft_strlen(scruffy))
		++ (*start);
	*end = ft_strlen(scruffy);
	while (*start < *end && ft_strchr(blade, scruffy [*end]))
		-- (*end);
}

///@param [in]	scruffy
///@param [in]	start
///@param [in]	end
///@param [out]	trim
static void	hydrate_trim(const char *const scruffy,
	const size_t start, const size_t end, char *const trim)
{
	size_t	i;

	i = 0;
	while (start + i <= end)
	{
		trim [i] = scruffy [start + i];
		++ i;
	}
	trim [i] = '\0';
}
