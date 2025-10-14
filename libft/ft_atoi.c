/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:46:34 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/14 18:56:14 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '+' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

/* #include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char example[] = "\n  \tjhrf0aMl42_";
	int result = atoi(example);
	printf("%d\n", result);

	result = ft_atoi(example);
	printf("%d\n", result);
	
	return (0);
} */
