/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:41:59 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/09 13:55:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

t_size	ft_strlen(const char *const string);

/** Outputs the `string` to the given `file_descriptor`.
 * @param[in] string The string to output.
 * @param[in] file_descriptor The file descriptor on which to write.
 * @remarks External function: `write`
 */
void	ft_putstr_fd(char *string, int file_descriptor)
{
	write(file_descriptor, string, ft_strlen(string));
}
