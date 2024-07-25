/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:18:18 by lgasc             #+#    #+#             */
/*   Updated: 2024/07/25 19:37:58 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///@remark	This function aims to replicate the `libc` function `isalnum`.
bool	ft_isalnum(const unsigned char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:48:14 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:32:42 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///@remark	This function aims to replicate the `libc` function `isalpha`.
bool	ft_isalpha(const unsigned char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:21:45 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 00:32:59 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///@remark	This function aims to replicate the `libc` function `isascii`.
bool	ft_isascii(const unsigned char c)
{
	return (c <= '\x7F');
}
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

///@remark	This function aims to replicate the `libc` function `isdigit`.
bool	ft_isdigit(const unsigned char c)
{
	return ('0' <= c && c <= '9');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:28:46 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/12 02:38:21 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///@see	https://cplusplus.com/reference/cctype/
///@remark	This function aims to replicate the `libc` function `isprint`.
bool	ft_isprint(const unsigned char c)
{
	return (' ' <= c && c <= '~');
}
