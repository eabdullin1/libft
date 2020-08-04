/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froxanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 13:19:12 by froxanne          #+#    #+#             */
/*   Updated: 2020/05/28 13:19:21 by froxanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_str_count(char const *s, char c)
{
	int		count;

	count = 0;
	while (1)
	{
		while (*s == c && *s)
			s++;
		if (!(*s))
			return (count);
		count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char		**ft_split_clear(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

static int		word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	int		tab_count;
	size_t	i;
	char	**tab;

	if (!s)
		return (0);
	tab_count = ft_str_count(s, c);
	if (!(tab = (char**)malloc(sizeof(s) * (tab_count + 1))))
		return (0);
	i = 0;
	while (tab_count)
	{
		while (*s && *s == c)
			s++;
		if (!(tab[i++] = ft_substr(s, 0, word_len(s, c))))
			return (ft_split_clear(tab));
		s += word_len(s, c);
		tab_count--;
	}
	tab[i] = 0;
	return (tab);
}
