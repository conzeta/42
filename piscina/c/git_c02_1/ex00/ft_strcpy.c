/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeta <zeta@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:54:40 by lduran-f          #+#    #+#             */
/*   Updated: 2025/09/19 01:00:18 by zeta             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy (char *dest, char *src)
{
	char	*s0;

	s0 = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s0);
}

int	main(void) 
{
    char s1[] = "";
  
    // Ensure destination has enough space
    char s2[50];  

    // Copying string using strcpy
    ft_strcpy(s2, s1);

    printf("%s", s2);
    return 0;
}