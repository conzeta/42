/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:45:16 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 22:07:41 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 47 && *str < 58))
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
	char ms1[] = "56299200";		//1
	char ms2[] = "PRUeBa";			//0
	char ms3[] = "753 856";			//0
	char ms4[] = "90!";				//0
	char ms5[] = "hello42";			//0
	char ms6[] = "";				//1

	printf("%d\n", ft_str_is_numeric(ms1));
	printf("%d\n", ft_str_is_numeric(ms2));
	printf("%d\n", ft_str_is_numeric(ms3));
	printf("%d\n", ft_str_is_numeric(ms4));
	printf("%d\n", ft_str_is_numeric(ms5));
	printf("%d\n", ft_str_is_numeric(ms6));
}
 */