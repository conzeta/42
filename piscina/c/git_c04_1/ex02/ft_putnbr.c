/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:36:11 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 16:38:13 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_int_to_char(int n)
{
	return ('0' + n);
}

void	ft_putnbr(int nb)
{
	char	toprint;
	int		maxvalint;

	maxvalint = 2147483647;
	if ((nb <= maxvalint) && (nb >= -maxvalint))
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		toprint = ft_int_to_char(nb % 10);
		write(1, &toprint, 1);
	}
	else if (nb == -maxvalint - 1)
	{
		write(1, "-2147483648", 11);
	}
}
/* int	main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(10003648);
	write(1, "\n", 1);
	ft_putnbr(0);
} */