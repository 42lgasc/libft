/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:34:57 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/09 17:21:55 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(const int integer);
void	ft_putstr_fd(const char *const string, const int file_descriptor);

/** Outputs the integer `integer` to the given `file_descriptor`.
 * @param[in] integer The integer to output.
 * @param[in] file_descriptor The file descriptor on which to write.
 * @remarks External function: `write`
 */
void	ft_putnbr_fd(int integer, int file_descriptor)
{
	ft_putstr_fd(ft_itoa(integer), file_descriptor);
}
