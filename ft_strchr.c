/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:57:21 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/06 18:41:56 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** Returns a pointer to the first occurrence of
 * the `character` in the `string`.
 * @param[in] string The string in which to search `character`.
 * @param[in] character The character to be searched in `string`.
 * @remarks Here "character" means "byte";
 * 	this function do not work with wide or multibyte characters.
 * @returns A pointer to the matched character or
 * 	NULL if the `character` is not found. The terminating null byte is
 * 	considered part of the `string`, so that if `character` is specified as
 * 	'\0', this function returns a pointer to the terminator.
 */
char	*ft_strchr(const char *string, char character)
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == character)
			return ((char *) &string[i]);
		i++;
	}
	if (string[i] == character)
		return ((char *) &string[i]);
	return ((void *) 0);
}
