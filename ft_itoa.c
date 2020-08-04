/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 02:56:36 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/29 07:22:29 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;
	char	buf[12];
	int		is_neg;

	is_neg = (n < 0) ? -1 : 1;
	i = 0;
	while (1)
	{
		buf[i++] = is_neg * (n % 10) + '0';
		n /= 10;
		if (!n)
			break ;
	}
	if (!(str = (char *)malloc(sizeof(char) *
		((is_neg == -1 ? 1 : 0) + i + 1))))
		return (0);
	j = 0;
	if (is_neg == -1)
		str[j++] = '-';
	while (--i >= 0)
		str[j++] = buf[i];
	str[j] = '\0';
	return (str);
}
