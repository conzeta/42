/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:42:36 by lduran-f          #+#    #+#             */
/*   Updated: 2025/08/01 08:27:06 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_spstrcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}

int	sizeret(int size, char **strs, char *sep)
{
	int		szret;
	int		i;

	szret = 1;
	szret += ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		szret += ft_strlen(strs[i]);
		i++;
	}
	return (szret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		szret;
	char	*s0;

	if (size <= 0)
	{
		ret = malloc(1);
		*ret = '\0';
		return (ret);
	}
	szret = sizeret(size, strs, sep);
	ret = malloc(szret);
	s0 = ret;
	i = 0;
	while (i < size)
	{
		ret = ft_spstrcpy(ret, strs[i]);
		if (i < size - 1)
			ret = ft_spstrcpy(ret, sep);
		i++;
	}
	*ret = '\0';
	return (s0);
}

/* #include <stdio.h>
int main(void)
{
	char *words[] = {"Hola", "mundo", "desde", "C"};
	int size = 4;
	char sep[] = " - ";

	char *result = ft_strjoin(size, words, sep);

	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: ft_strjoin retornó NULL.\n");
	}

	// También probamos con size = 0
	char *empty_result = ft_strjoin(0, words, sep);
	printf("Con size = 0: '%s'\n", empty_result);
	free(empty_result);

	return 0;
} */