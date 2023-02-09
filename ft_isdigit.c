/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:00 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/05 20:31:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(unsigned char character)
{
	return ('0' <= character && character <= '9');
}