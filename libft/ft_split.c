/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:02:39 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 21:04:31 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_split(char const *s, char c)
{
	size_t	nb_split;

	nb_split = 0;
	if (!*s)
		return (0);
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		nb_split++;
		while (*s == c && *s)
			s++;
	}
	return (nb_split);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_split;
	size_t	sz_str;
	size_t	i;
	char	**tab_split;

	nb_split = count_split(s, c);
		tab_split = malloc((nb_split + 1) * sizeof(char *));
	if (!tab_split)
		return (NULL);
	tab_split[nb_split] = NULL;
	i = 0;
	while (i < nb_split)
	{
		sz_str = 0;
		while (s[sz_str] == c)
			s++;
		while (s[sz_str] != c && s[sz_str])
			sz_str++;
		tab_split[i] = malloc((sz_str + 1) * sizeof(char));
		ft_strlcpy(tab_split[i++], s, sz_str + 1);
		s += sz_str;
	}
	return (tab_split);
}
