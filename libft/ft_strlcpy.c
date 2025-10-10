/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:35:52 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/10 20:25:31 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (size > 0)
	{
		while (src[l] != '\0' && l < size -1)
		{
			dest[l] = src[l];
			l++;
		}
		dest[l] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <stdio.h>
int	main(void)
{
	char	mystring[] = "42 sheep in a room"; //18+1 caracteres.
	char	copy[19];
	size_t	orisz;
	
	orisz = ft_strlcpy(copy, mystring, 0);
	printf("orisz: %d\n", orisz);
	printf("copy: '%s'\n", copy);
	return (0);
} */
