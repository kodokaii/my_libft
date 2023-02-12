/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:21:27 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 21:03:59 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (ft_strlen(s) <= start)
		len = 0;
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy[len] = '\0';
	while (len--)
		cpy[len] = s[start + len];
	return (cpy);
}
