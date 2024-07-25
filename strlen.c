/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:31:14 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 16:51:37 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark This function aims to replicate the `libc` function `strlen`.
size_t	ft_strlen(const char *const string)
{
	size_t	length;

	length = 0;
	while (string [length])
		++ length;
	return (length);
}
