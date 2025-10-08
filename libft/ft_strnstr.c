/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:44:14 by lduran-f          #+#    #+#             */
/*   Updated: 2025/09/29 15:47:29 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, const char *to_find, unsigned int n)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (str[i] != 0 && i < n)
	{
		while (str[i] == to_find[i2] && i < n)
		{
			if (to_find[i2 + 1] == '\0')
			{
				return (str + i - i2);
			}
			i++;
			i2++;
		}
		i++;
		i2 = 0;
	}
	return (0);
}

/* #include <stdio.h>
 
int	main(void)
{
   char *string12 = "buenos tenores";
   char *string22 = "nor";
   char *result;

   result = ft_strnstr(string12, string22, 10);
   printf("mío: %s\n", result);
} */