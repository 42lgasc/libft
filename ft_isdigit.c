/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:00 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/17 21:58:05 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

////@remark This function aims to replicate the `libc` function `isdigit`.
bool	ft_isdigit(const char c)
{
	return ('0' <= c && c <= '9');
}
