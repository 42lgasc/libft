/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:17:29 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/03 17:13:39 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, char character)
{
	unsigned int	i;
	const char		*match;

	i = 0;
	match = (void *) 0;
	while (string[i])
	{
		if (string[i] == character)
			match = &string[i];
		i++;
	}
	if (string[i] == character)
		match = &string[i];
	return ((char *) match);
}
