/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:13:44 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/26 18:34:32 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	ft_recursive_power(int nb, int power)
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

int	ignore(char *str, int i)
{
	if (!((str[i] == ' ') || (str[i] == '\f')
			|| (str[i] == '\n') || (str[i] == '\r')
			|| (str[i] == '\t') || (str[i] == '\v')
			|| (str[i] == '+')))
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	l;
	int	sign;
	int	result;

	sign = 1;
	l = 0;
	i = 0;
	result = 0;
	while (str[i] != 0 && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			sign *= -1;
		else if (ignore(str, i) == 0)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		l++;
	}
	i = i - l;
	l = i + l;
	while (i < l)
	{
		result += (str[i] - 48) * ft_recursive_power(10, l - i -1);
		i++;
	}
	return (result * sign);
} */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
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
	char example[] = "   \n+--+-75aMl42_";
	int result = atoi(example);
	printf("%d\n", result);

	result = ft_atoi(example);
	printf("%d", result);
	
	return (0);
} */