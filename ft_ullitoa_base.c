/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullitoa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 02:29:47 by froxanne          #+#    #+#             */
/*   Updated: 2020/07/10 22:46:18 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		take_base_len(unsigned long long num, int base)
{
	int len;

	len = 0;
	while (num)
	{
		num /= base;
		len++;
	}
	return (len);
}

char			*ft_ullitoa(unsigned long long num, int base, const char *nums)
{
	int		i;
	int		j;
	char	*str;
	char	tmp;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (take_base_len(num, base) + 1))))
		return (0);
	while (1)
	{
		str[i++] = nums[(num % base)];
		num /= base;
		if (!num)
			break ;
	}
	str[i--] = '\0';
	j = 0;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j++] = tmp;
		i--;
	}
	return (str);
}
