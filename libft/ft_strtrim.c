/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:40:34 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 21:03:34 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	sz_str;

	while (*s1 && ft_strchr(set, *s1))
			s1++;
	sz_str = ft_strlen(s1);
	while (sz_str && ft_strchr(set, s1[sz_str - 1]))
		sz_str--;
	str = malloc((sz_str + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[sz_str] = '\0';
	while (sz_str--)
		str[sz_str] = s1[sz_str];
	return (str);
}
