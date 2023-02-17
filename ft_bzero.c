/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:44:15 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:37:29 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** @remark This function aims to replicate the `libc` function `bzero`. */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
