/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:11:06 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/16 18:53:04 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_int_to_char(int n)
{
	return ('0' + n);
}

void	ft_print_2(int n11, int n12, int n21, int n22)
{
	char	cn11;
	char	cn12;
	char	cn21;
	char	cn22;

	cn11 = ft_int_to_char(n11);
	cn12 = ft_int_to_char(n12);
	cn21 = ft_int_to_char(n21);
	cn22 = ft_int_to_char(n22);
	write(1, &cn11, 1);
	write(1, &cn12, 1);
	write(1, " ", 1);
	write(1, &cn21, 1);
	write(1, &cn22, 1);
	if ((n11 * 10 + n12) < 98)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	digs[4];

	digs[0] = 0;
	while (digs[0] <= 9)
	{
		digs[1] = 0;
		while (digs[1] <= 9)
		{
			digs[2] = 0;
			while (digs[2] <= 9)
			{
				digs[3] = 0;
				while (digs[3] <= 9)
				{
					if ((digs[2] * 10 + digs[3]) > (digs[0] * 10 + digs[1]))
						ft_print_2(digs[0], digs[1], digs[2], digs[3]);
					digs[3]++;
				}
				digs[2]++;
			}
			digs[1]++;
		}
		digs[0]++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
} */