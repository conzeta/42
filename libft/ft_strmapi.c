/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:27:44 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/13 13:11:55 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	slen;
	size_t	i;

	if (!s || !f)
		return (0);
	slen = ft_strlen(s);
	res = malloc(1 + slen);
	if (!res)
		return (0);
	i = 0;
	while (i < slen)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* static char	special_toupper(unsigned int i, char c)
{
	i = i;
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

int	main(void)
{
	char	*str;
	char	*result;

	str = "Dubi doo, yo quiero ser como tu!";
	result = ft_strmapi(str, special_toupper);
	printf("%s\n", result);
	free(result);
}
 */