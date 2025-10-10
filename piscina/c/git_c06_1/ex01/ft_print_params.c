/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:43:21 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 14:29:36 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*pi;

	if (argc >= 2)
	{
		argv++;
		while (*argv != 0)
		{
			pi = *argv;
			while (*pi != 0)
			{
				write(1, pi, 1);
				pi++;
			}
			write(1, "\n", 1);
			argv++;
		}
	}
}
