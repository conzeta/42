/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:05:15 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/16 18:09:45 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_int_to_char(int n)
{
	return ('0' + n);
}

void	ft_print_1(int n1, int n2, int n3)
{
	char	cn1;
	char	cn2;
	char	cn3;

	cn1 = ft_int_to_char(n1);
	cn2 = ft_int_to_char(n2);
	cn3 = ft_int_to_char(n3);
	write(1, &cn1, 1);
	write(1, &cn2, 1);
	write(1, &cn3, 1);
	if (n1 < 7)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	dig1;
	int	dig2;
	int	dig3;

	dig1 = 0;
	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig2 <= 9)
		{
			dig3 = 0;
			while (dig3 <= 9)
			{
				if ((dig1 < dig2) && (dig2 < dig3))
				{
					ft_print_1(dig1, dig2, dig3);
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
}

/* int	main(void)
{
	ft_print_comb();
} */