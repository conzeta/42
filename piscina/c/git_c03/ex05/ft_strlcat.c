/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:00:54 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/22 13:23:40 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	ld;

	ld = ft_strlen(dest);
	n = ft_strlen(dest);
	i = 0;
	if (size >= ld +1)
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
