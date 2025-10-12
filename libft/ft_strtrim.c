/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:38:40 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/12 12:35:34 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end >= start && ft_strchr(set, s1[end]) != 0)
		end--;
	return (ft_substr(s1, start, end - start + 1));
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