/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:08:42 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/20 15:11:52 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @see https://stackoverflow.com/a/5416724
 * @remark This function aims to replicate the `libc` function `strnstr`.
 */
char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char *const) big);
	if (length == 0)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(big) - ft_strlen(little)
		&& i <= length - ft_strlen(little))
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j])
			{
				j++;
				if (little[j] == '\0')
					return ((char *const) &big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
