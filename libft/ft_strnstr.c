/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:44:14 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/21 20:06:54 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	i2;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	i = 0;
	while (str[i] != 0 && i < n)
	{
		i2 = 0;
		while (str[i] == to_find[i2] && i < n)
		{
			if (to_find[i2 + 1] == '\0')
			{
				return ((char *)(str + i - i2));
			}
			i++;
			i2++;
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
 
int	main(void)
{
   const char *string12 = "buenos tenores";
   const char *string22 = "nor";
   char *result;

   result = ft_strnstr(string12, string22, 10);
   printf("mío: %s\n", result);
} */