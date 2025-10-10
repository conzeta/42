/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:53:37 by lduran-f          #+#    #+#             */
/*   Updated: 2025/08/01 07:56:01 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

int	ft_sqrt(int nb)
{
	int	s;
	int	i;

	s = 0;
	i = 0;
	if (nb <= 0)
		return (0);
	while (s < nb)
	{
		s = ft_recursive_power(i, 2);
		i++;
	}
	if (s == nb)
		return (i - 1);
	else
		return (0);
}

/* #include <stdio.h>
int main()
{
	int result = ft_sqrt(2);
	printf("%d\n", result);
} */