/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:39:45 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/14 19:36:29 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	special_strlen(const char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && i < size)
		i++;
	if (i >= size)
		return (size);
	else
		return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	ld;

	ld = special_strlen(dest, size);
	n = ld;
	i = 0;
	if (size > ld +1)
	{
		while (src[i] != '\0' && i < size - ld - 1)
		{
			dest[n] = src[i];
			n++;
			i++;
		}
		dest[n] = '\0';
	}
	return (ld + ft_strlen(src));
}

/* #include <stdio.h>

int	main(void)
{
	char	mystring1[50] = "42 sheep "; //9+1 caracteres.
	char	mystring2[] = "in a room"; //9+1 caracteres.
	
	printf("dest: '%s'\n", mystring1);
	printf("src: '%s'\n", mystring2);
	unsigned int	desrlength;

	desrlength = ft_strlcat(mystring1, mystring2, 8);
	printf("desrlength: %u\n", desrlength);
	printf("dest: '%s'\n", mystring1);
	return (0);
} */
