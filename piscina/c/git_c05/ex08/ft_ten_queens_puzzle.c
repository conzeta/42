/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:47:01 by lduran-f          #+#    #+#             */
/*   Updated: 2025/08/01 07:57:15 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	inisol(int *solutions)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		solutions[i] = -1;
		i++;
	}
}

int	ispossible(int f, int c, int *solutions)
{
	int	i;
	int	m;
	int	r;

	i = 0;
	while (solutions[i] != -1)
	{
		if ((f - solutions[i]) != 0)
		{
			m = (c - i) / (f - solutions[i]);
			r = (c - i) % (f - solutions[i]);
		}
		if (c == i || f == solutions[i] || r == 0 && (m == 1 || m == -1))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	evaluatec(int *solutions, int c, int fi)
{
	while (ispossible(fi, c, solutions) == 0 && fi < 10)
	{
		fi++;
		if (fi == 10)
		{
			fi = 0;
			evaluatec(solutions, c - 1, solutions[c - 1] + 1);
		}
	}
	solutions[c] = fi;
}

void	writesol(int *solutions)
{
	int		i;
	char	fchar;

	i = 0;
	while (i < 10)
	{
		fchar = solutions[i] + 48;
		write(1, &fchar, 1);
		i++;
	}
}

void	ft_ten_queens_puzzle(void)
{
	char	fchar;
	int		f;
	int		c;
	int		solutions[10];

	inisol(solutions);
	c = 0;
	while (c < 10)
	{
		f = 0;
		evaluatec(solutions, c, f);
		c++;
	}
	writesol(solutions);
}

/* int main()
{
	ft_ten_queens_puzzle();
	return (0);
} */