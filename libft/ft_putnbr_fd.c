/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodokai <kodokai.featheur@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:10:43 by kodokai           #+#    #+#             */
/*   Updated: 2023/02/11 17:45:56 by kodokai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n / 10)
		ft_putunbr_fd(n / 10, fd);
	n = (n % 10) + '0';
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putunbr_fd(n * -1, fd);
	}
	else
		ft_putunbr_fd(n, fd);
}
