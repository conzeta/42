/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:47:36 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/13 20:25:09 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw(int xi, int yi, int x, int y)
{
	if (xi == 0 & yi == 0)
	{
		ft_putchar ('/');
	}
	else if ((xi == 0 && yi == y - 1) || (xi == x - 1 && yi == 0))
	{
		ft_putchar (92);
	}
	else if ((xi == x - 1 && yi == y - 1))
	{
		ft_putchar ('/');
	}
	else if (xi == 0 || xi == x - 1 || yi == 0 || yi == y - 1)
	{
		ft_putchar ('*');
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
