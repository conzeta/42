/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 23:29:59 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/17 23:35:25 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
char	*ft_strlowcase(char *str)
{
	char	*s0;

	s0 = str;
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (s0);
}
/* int	main(void)
{
	char ms1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ms2[] = "PRUeBas";
	char ms3[] = "ABC XYZ";
	char ms4[] = "ABC!";
	char ms5[] = "RIIF42";
	char ms6[] = "";

	printf("%s\n", ft_strlowcase(ms1));
	printf("%s\n", ft_strlowcase(ms2));
	printf("%s\n", ft_strlowcase(ms3));
	printf("%s\n", ft_strlowcase(ms4));
	printf("%s\n", ft_strlowcase(ms5));
	printf("%s\n", ft_strlowcase(ms6));
} */