/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:59:54 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/29 18:46:33 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *arr, int symb, size_t size)
{
	size_t			i;
	unsigned char	c;
	unsigned char	*tmp;

	i = 0;
	c = (unsigned char)symb;
	tmp = (unsigned char *)arr;
	while (i < size)
	{
		if (tmp[i] == c)
			return ((void *)(&(tmp[i])));
		i++;
	}
	return (0);
}
