/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:44:14 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/22 12:52:18 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	i2;
	size_t	ti;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	i = 0;
	while (str[i] != 0 && i < n)
	{
		i2 = 0;
		ti = i;
		while (str[ti] == to_find[i2] && ti < n)
		{
			if (to_find[i2 + 1] == '\0')
			{
				return ((char *)(str + ti - i2));
			}
			ti++;
			i2++;
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
 
int	main(void)
{
   const char *string12 = "a_a_a_a_z";
   const char *string22 = "a_z";
   char *result;

   result = ft_strnstr(string12, string22, 10);
   printf("mío: %s\n", result);
} */