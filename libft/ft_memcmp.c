/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:32:07 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/08 11:53:01 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		
	}
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	e1[] = "hola caracola";
	char	e2[] = "hola arturo";

	printf("%d\n", memcmp(e1, e2, 16));
}
