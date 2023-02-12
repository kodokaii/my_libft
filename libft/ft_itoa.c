/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:35:44 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 20:05:45 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lennb(int n)
{
	size_t	sz_n;

	sz_n = 1;
	while (n / 10)
	{
		sz_n++;
		n /= 10;
	}
	return (sz_n + (n < 0));
}

char	*ft_itoa(int n)
{
	size_t			sz_n;
	char			*str;

	sz_n = ft_lennb(n);
	str = malloc((sz_n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[sz_n] = '\0';
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n || !str[sz_n])
	{
		str[--sz_n] = '0' + ((unsigned int) n % 10);
		n = (unsigned int) n / 10;
	}
	return (str);
}
