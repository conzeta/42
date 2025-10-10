/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:44:30 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 12:00:35 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* #include <stdio.h>
int	main(void)
{
	char mystring[] = "hola";
	printf("longitud: %d\n", ft_strlen(mystring));
	return (0);
} */