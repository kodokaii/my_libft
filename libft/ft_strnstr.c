/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:30:10 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 20:00:28 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((char *) big);
	while (len && *big)
	{
		i = 0;
		while (big[i] && little[i] && big[i] == little[i] && i < len)
			i++;
		if (!little[i])
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
