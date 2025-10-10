/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:19:30 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/29 18:38:40 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] > '\0')
		i++;
	return (i);
}
int	main(void)
{
	char mystring[] = "hola";
	printf("longitud: %d\n", ft_strlen(mystring));
	return (0);
}