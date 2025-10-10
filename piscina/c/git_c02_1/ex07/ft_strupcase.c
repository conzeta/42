/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:39:44 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/18 01:34:04 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
char	*ft_strupcase(char *str)
{
	char	*s0;

	s0 = str;
	while (*str != '\0')
	{
		if (*str > 96 && *str < 123)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (s0);
}
/* int	main(void)
{
	char ms1[] = "abcdefghijklmnopqrstuvwxyz";
	char ms2[] = "PRUeBas";
	char ms3[] = "abc xyz";
	char ms4[] = "abc!";
	char ms5[] = "oiug42";
	char ms6[] = "";

	printf("%s\n", ft_strupcase(ms1));
	printf("%s\n", ft_strupcase(ms2));
	printf("%s\n", ft_strupcase(ms3));
	printf("%s\n", ft_strupcase(ms4));
	printf("%s\n", ft_strupcase(ms5));
	printf("%s\n", ft_strupcase(ms6));
} */