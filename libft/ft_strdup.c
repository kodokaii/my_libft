/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:21:27 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 20:01:45 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	sz_str;
	char	*cpy;

	sz_str = ft_strlen(s);
	cpy = malloc((sz_str + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy[sz_str] = '\0';
	while (sz_str--)
		cpy[sz_str] = s[sz_str];
	return (cpy);
}
