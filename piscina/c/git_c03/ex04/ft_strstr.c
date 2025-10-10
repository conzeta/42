/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:21:50 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/29 17:04:30 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i2;
	int		l2;

	l2 = 0;
	while (to_find[l2] != '\0')
	{
		l2++;
	}
	if (l2 == 0)
		return (str);
	i2 = 0;
	while (*str != '\0')
	{
		if (*str == to_find[i2])
		{
			if (i2 == l2 - 1)
				return (str - (l2 -1));
			i2++;
		}
		else
			i2 = 0;
		str++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
 
int main(void)
{
   char *string1 = "needle in a haystack";
   char *string12 = "buenos tenores";
   char *string2 = "";
   char *string22 = "nor";
   char *result;
 
   result = ft_strstr(string1,string2);
   printf("mío: %s\n", result);
   
   result = ft_strstr(string12,string22);
   printf("mío: %s\n", result);

   result = strstr(string1,string2);
   printf("strstr: %s\n", result);
   
   result = strstr(string12,string22);
   printf("strstr: %s\n", result);
} */
