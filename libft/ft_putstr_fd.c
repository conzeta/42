/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:58:20 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/13 19:17:11 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* while (*s != 0)
	{
		write(fd, s, 1);
		s++;
	} */
/* int	main(void)
{
	ft_putstr_fd("Hola mundo\n", 1);
} */