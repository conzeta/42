/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:42:44 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/14 08:49:46 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	toprint;
	int		maxvalint;

	maxvalint = 2147483647;
	if ((n <= maxvalint) && (n >= -maxvalint))
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		if (n / 10 != 0)
		{
			ft_putnbr(n / 10);
		}
		toprint = (n % 10) + '0';
		write(fd, &toprint, 1);
	}
	else if (n == -maxvalint - 1)
	{
		write(fd, "-2147483648", 12);
	}
}
