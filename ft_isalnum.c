/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:18:18 by lgasc             #+#    #+#             */
/*   Updated: 2023/02/02 13:09:39 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(unsigned char character);
int	ft_isdigit(unsigned char character);

int	ft_isalnum(unsigned char character)
{
	return (ft_isalpha(character) || ft_isdigit(character));
}
