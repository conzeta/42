/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:09:16 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 22:38:44 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 31 && *str < 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/* int	main(void)
{
	char ms1[] = "ABCDEfghijklmnoPQRSTUVWXYZ";		//1
	char ms2[] = "PRUeBa?!";						//1
	char ms3[] = "*_-+/{}~ .,XYZ<>:;";				//1
	char ms4[] = {33, 'a', 'L'};					//1
	char ms5[] = "";								//1
	char ms6[] = {5, 'a', 'L'};						//0
	char ms7[] = {127, 1, 2, 10, 19, 21, 30, 31};	//0

	printf("%d\n", ft_str_is_printable(ms1));
	printf("%d\n", ft_str_is_printable(ms2));
	printf("%d\n", ft_str_is_printable(ms3));
	printf("%d\n", ft_str_is_printable(ms4));
	printf("%d\n", ft_str_is_printable(ms5));
	printf("%d\n", ft_str_is_printable(ms6));
	printf("%d\n", ft_str_is_printable(ms7));
}
 */