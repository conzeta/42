/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:44:57 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 11:46:33 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(void)
{
    int div;
    int mod;
    ft_div_mod(10, 5, &div, &mod);
    printf("Cociente: %d\n", div);
    printf("Resto: %d\n", mod);
    return (0);
} */
