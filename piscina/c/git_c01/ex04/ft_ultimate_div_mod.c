/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:37:04 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 11:53:58 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_temp;

	a_temp = *a;
	*a = *a / *b;
	*b = a_temp % *b;
}

/* int main(void)
{
    int av;
    int bv;
    av = 10;
    bv = 5;
    printf("valores a y b: %d, %d\n", av, bv);
    ft_ultimate_div_mod(&av, &bv);
    printf("ahora a y b: %d, %d\n", av, bv);
    return (0);
} */
