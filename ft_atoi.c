/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:50:46 by froxanne          #+#    #+#             */
/*   Updated: 2020/07/23 21:00:56 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int				is_neg;
	long int		num;
	int				i;

	num = 0;
	is_neg = 1;
	i = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		is_neg = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str++ - '0';
		i++;
	}
	if (i > 10)
		return (is_neg == 1 ? -1 : 0);
	return (num * is_neg);
}
