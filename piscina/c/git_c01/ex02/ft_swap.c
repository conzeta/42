/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:22:49 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 11:38:32 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	va;

	va = *a;
	*a = *b;
	*b = va;
}

/* int	main(void)
{
	int	a_value;
	int	b_value;

	a_value = 1;
	b_value = 2;
	printf("Valor a antes: %d\n", a_value);
	printf("Valor b antes: %d\n", b_value);
	ft_swap(&a_value, &b_value);
	printf("Valor a después: %d\n", a_value);
	printf("Valor b después: %d\n", b_value);
	return (0);
} */
