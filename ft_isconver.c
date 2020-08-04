/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isconver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 20:03:44 by froxanne          #+#    #+#             */
/*   Updated: 2020/07/01 13:07:56 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isconver(char c)
{
	if (c == 'd' || c == 'i')
		return (1);
	if (c == 'u')
		return (1);
	if (c == 'c')
		return (1);
	if (c == 's')
		return (1);
	if (c == 'p')
		return (1);
	if (c == 'x' || c == 'X')
		return (1);
	if (c == 'n')
		return (1);
	if (c == 'g')
		return (1);
	if (c == 'f')
		return (1);
	if (c == 'e')
		return (1);
	if (c == '%')
		return (1);
	return (0);
}
