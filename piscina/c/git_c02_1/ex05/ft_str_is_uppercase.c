/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:02:32 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 22:07:48 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 64 && *str < 91))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int	main(void)
{
	char ms1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";		//1
	char ms2[] = "PRUeBa";							//0
	char ms3[] = "ABC XYZ";							//0
	char ms4[] = "ABC!";							//0
	char ms5[] = "OIUG42";							//0
	char ms6[] = "";								//1

	printf("%d\n", ft_str_is_uppercase(ms1));
	printf("%d\n", ft_str_is_uppercase(ms2));
	printf("%d\n", ft_str_is_uppercase(ms3));
	printf("%d\n", ft_str_is_uppercase(ms4));
	printf("%d\n", ft_str_is_uppercase(ms5));
	printf("%d\n", ft_str_is_uppercase(ms6));
}
 */