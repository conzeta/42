/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:38:40 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/12 11:21:43 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	int		i;
	int		setlen;

	start = (char *) s1;
	end = (char *) s1 + ft_strlen(s1) - 1;
	setlen = (int) ft_strlen(set);
	i = 0;
	while (i < setlen)
	{
		while (*start == set[i])
		{
			start++;
			i = -1;
		}
		i++;
	}
	i = 0;
	while (i < setlen)
	{
		while (*end == set[i])
		{
			end--;
			i = -1;
		}
		i++;
	}
	return (ft_substr(s1, start - s1, end - start + 1));
}

/* #include <stdio.h>

int	main(void)
{
	char const	mystring[] = "+-*-hola*persona+--*+";
	char const	set[] = "-*+";
	char		*ret;

	ret = ft_strtrim(mystring, set);
	printf("%s", ret);
} */
//Cuidado con "\"