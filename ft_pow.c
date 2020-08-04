/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 08:04:03 by froxanne          #+#    #+#             */
/*   Updated: 2020/07/02 04:34:25 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long int	ft_pow(unsigned long long int num, int degree)
{
	int						i;
	unsigned long long int	tmp;

	tmp = num;
	i = 0;
	if (degree > 18)
		degree = 18;
	while (i < degree)
	{
		num *= tmp;
		i++;
	}
	return (num);
}
