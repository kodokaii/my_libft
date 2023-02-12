/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:10:21 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 21:04:59 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*cpy;

	cpy = ft_strdup(s);
	if (!cpy)
		return (NULL);
	i = 0;
	while (cpy[i])
	{
		cpy[i] = (*f)(i, cpy[i]);
		i++;
	}
	return (cpy);
}
