/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:16:33 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 16:57:24 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*pi;

	i = argc;
	while (i > 1)
	{
		pi = argv[i - 1];
		while (*pi != 0)
		{
			write(1, pi, 1);
			pi++;
		}
		write(1, "\n", 1);
		i--;
	}
}
