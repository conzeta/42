/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:04:10 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 22:07:38 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/* 
int	main(void)
{
	char ms1[] = "hello";		//1
	char ms2[] = "PRUeBa";		//1
	char ms3[] = "hello you";	//0
	char ms4[] = "hello!";		//0
	char ms5[] = "hello42";		//0
	char ms6[] = "";			//1

	printf("%d\n", ft_str_is_alpha(ms1));
	printf("%d\n", ft_str_is_alpha(ms2));
	printf("%d\n", ft_str_is_alpha(ms3));
	printf("%d\n", ft_str_is_alpha(ms4));
	printf("%d\n", ft_str_is_alpha(ms5));
	printf("%d\n", ft_str_is_alpha(ms6));
} */