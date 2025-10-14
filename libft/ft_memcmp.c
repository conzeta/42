/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:32:07 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/14 18:48:49 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((((unsigned char *) s1)[i] != 0 || ((unsigned char *) s2)[i] != 0)
				&& i < n)
	{
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
		{
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		}
		i++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	e1[] = "hola caracola";
	char	e2[] = "hola caracol";

	printf("%d\n", memcmp(e1, e2, 16));
	printf("%d\n", ft_memcmp(e1, e2, 16));
} */