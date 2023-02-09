/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:03 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/06 18:03:37 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"

t_size	ft_strlen(const char *string);
void	*ft_calloc(t_size member_amount, t_size member_size);

char	*ft_strdup(const char *original)
{
	char			*duplicant;
	unsigned int	i;

	duplicant = ft_calloc(ft_strlen(original) + 1, sizeof * duplicant);
	if (duplicant == (void *) 0 && errno == ENOMEM)
		return ((void *) 0);
	i = 0;
	while (original[i])
	{
		duplicant[i] = original[i];
		i++;
	}
	duplicant[i] = '\0';
	return (duplicant);
}
