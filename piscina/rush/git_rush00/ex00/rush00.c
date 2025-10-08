/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:40:01 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/13 20:24:46 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw(int xi, int yi, int x, int y)
{
	if ((xi == 0 || xi == x - 1) && (yi == 0 || yi == y - 1))
	{
		ft_putchar ('o');
	}
	else if (xi == 0 || xi == x - 1)
	{
		ft_putchar ('|');
	}
	else if (yi == 0 || yi == y - 1)
	{
		ft_putchar ('-');
	}
	else
	{
		ft_putchar (' ');
	}
}

void	rush(int x, int y)
{
	int	xi;
	int	yi;

	yi = 0;
	while (yi < y && y > 0)
	{
		xi = 0;
		while (xi < x && x > 0)
		{
			draw(xi, yi, x, y);
			xi++;
		}
		ft_putchar ('\n');
		yi++;
	}
}
