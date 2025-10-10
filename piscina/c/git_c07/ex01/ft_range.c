/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:06:00 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 18:57:16 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	sz;
	int	*ret;

	if (min >= max)
		return (0);
	sz = max - min;
	ret = malloc(sizeof(int) * sz);
	sz = 0;
	while (min < max)
		ret[sz++] = min++;
	return (ret);
}

/* #include <stdio.h>
int	main(void)
{
	int min = 0;
	int max = 6;
	int *ret = ft_range(min,max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d", ret[i++]);
	}
} */
