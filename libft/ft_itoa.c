/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:46:17 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/12 19:53:00 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbrlen(int n)
{
	size_t	nlen;

	nlen = 1;
	while ((n / 10) != 0)
	{
		n = n / 10;
		nlen++;
	}
	return (nlen);
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
	size_t	nlen;
	size_t	sz;
	char	*str;
	char	*ret;

	nlen = nbrlen(n);
	sz = nlen + 1;
	if (n < 0)
		sz++;
	str = malloc(sz);
	if (!str)
		return (0);
	ret = str;
	if (n < 0)
	{
		*str = '-';
		str++;
		n = -n;
	}
	str[nlen] = '\0';
	str = str + nlen - 1;
	putrdigits(str, n, nlen);
	return (ret);
}

/* void	ft_putnbr(int nb)
{
	char	toprint;
	int		maxvalint;

	maxvalint = 2147483647;
	if ((nb <= maxvalint) && (nb >= -maxvalint))
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		toprint = ft_int_to_char(nb % 10);
		write(1, &toprint, 1);
	}
	else if (nb == -maxvalint - 1)
	{
		write(1, "-2147483648", 11);
	}
} */
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
