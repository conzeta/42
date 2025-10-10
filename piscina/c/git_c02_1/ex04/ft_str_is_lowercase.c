/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:52:30 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 22:07:43 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 96 && *str < 123))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int	main(void)
{
	char ms1[] = "abcdefghijklmnopqrstuvwxyz";		//1
	char ms2[] = "PRUeBa";							//0
	char ms3[] = "abc xyz";							//0
	char ms4[] = "abc!";							//0
	char ms5[] = "oiug42";							//0
	char ms6[] = "";								//1

	printf("%d\n", ft_str_is_lowercase(ms1));
	printf("%d\n", ft_str_is_lowercase(ms2));
	printf("%d\n", ft_str_is_lowercase(ms3));
	printf("%d\n", ft_str_is_lowercase(ms4));
	printf("%d\n", ft_str_is_lowercase(ms5));
	printf("%d\n", ft_str_is_lowercase(ms6));
} */