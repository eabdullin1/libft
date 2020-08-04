/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:58:41 by froxanne          #+#    #+#             */
/*   Updated: 2020/08/04 18:00:29 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
float	ft_atof(char *str)
{
	int		f_part;
	float	accur;
	float	num;
	int		is_neg;
	
	accur = 1;
	is_neg = 0;
	if (!str || !*str)
		return (0);
	if (str[0] == '-')
		is_neg = 1;
	num = ft_atoi(str);
	if (!str && !*str)
		return (num);
	while ((ft_isdigit(*str) || *str == '-') && *str != '.')
		str++;
	if (*str == '.')
	{
		str++;
		f_part = ft_atoi(str);
		while (*str && ft_isdigit(*str++))
		{
			accur *= 0.1;
			// str++;
		}
		num += accur * f_part * ((is_neg) ? -1 : 1);
	}
	return (num);
}
