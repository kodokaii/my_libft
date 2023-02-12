/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:26:55 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 19:58:53 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sz_dst;
	size_t	sz_src;

	sz_dst = 0;
	sz_src = 0;
	while (sz_dst < size && dst[sz_dst])
		sz_dst++;
	size -= sz_dst;
	while (sz_src + 1 < size && src[sz_src])
	{
		dst[sz_dst + sz_src] = src[sz_src];
		sz_src++;
	}
	if (0 < size)
		dst[sz_dst + sz_src] = '\0';
	while (src[sz_src])
		sz_src++;
	return (sz_dst + sz_src);
}
