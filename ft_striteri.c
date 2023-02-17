/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:57:12 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/10 16:49:51 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** Applies the `function` on each character of the `string` passed as argument,
 * 	passing its index as first argument. Each character is passed by address to
 * 	`function` to be modified if necessary.
 * @param[in,out] string The string on which to iterate.
 * @param[in] function The function to apply to each character.
 */
void	ft_striteri(char *string, void (*function)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		function(i, &string[i]);
		i++;
	}
}
