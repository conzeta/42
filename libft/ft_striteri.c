/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:13:33 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/13 13:39:40 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void	special_toupper(unsigned int i, char *c)
{
	i = i;
	if (*c > 96 && *c < 123)
		*c -= 32;
	return ;
}

int	main(void)
{
	char	str[] = "Dubi doo, yo quiero ser como tu!";

	ft_striteri(str, special_toupper);
	printf("%s\n", str);
}
 */