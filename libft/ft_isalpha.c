/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 03:39:16 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/05 20:32:05 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/* #include <ctype.h>
#include <stdio.h>

int main()
{
    printf("%-5s %-10s %-12s\n", "Char", "isalpha", "ft_isalpha");
    printf("--------------------------------\n");
    int c = -65; //problemas: ñ
    int std = isalpha(c);
    int my = ft_isalpha(c);
    printf("%-5d %-10d %-12d\n", c, std, my);
} */