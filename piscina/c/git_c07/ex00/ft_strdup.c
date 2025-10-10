/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:36:00 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 18:03:53 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*s0;

	s0 = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s0);
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int		len;

	len = ft_strlen(src);
	if (len <= 0)
		return (0);
	ret = malloc(len + 1);
	ret = ft_strcpy(ret, src);
	return (ret);
}

/* #include <stdio.h>
int	main(void)
{
	char	mystring[] = "step by step";
	printf("%s", ft_strdup(mystring));
	free(ft_strdup(mystring));
} */