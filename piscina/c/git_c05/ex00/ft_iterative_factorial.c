/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:33:53 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 12:17:37 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

/* #include <stdio.h>
int main()
{
	int result;
	result = ft_iterative_factorial(2);
	printf("%d\n",result);
	return 0;
} */