/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:53:43 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/20 19:20:31 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/* #include <stdio.h>

int main() {
  char cadena1[50] = "Hola ";
  char cadena2[] = "mundo!";

  printf("Cadena destino: %s\n", cadena1);
  printf("Cadena fuente: %s\n", cadena2);

  // Concatenar cadena2 a cadena1
  ft_strncat(cadena1, cadena2, 1);

  printf("Cadena concatenada: %s\n", cadena1); // Salida: Hola mundo!

  return 0;
} */