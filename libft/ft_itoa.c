/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:46:17 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/12 22:56:31 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	snlen(int n)
{
	size_t	len;

	len = 1;
	while ((n / 10) != 0)
	{
		n = n / 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

static void	putrdigits(char *end, int n, size_t nlen)
{
	size_t	i;

	i = nlen;
	while (i > 0)
	{
		*end = n % 10 + '0';
		n = n / 10;
		end--;
		i--;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = snlen(n);
	str = malloc(len + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	putrdigits(str + len - 1, n, snlen(n));
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	int		num;
	char	*sn;

	num = 101;
	sn = ft_itoa(num);
	printf("%s\n", sn);
	free(sn);
} */
