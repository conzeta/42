/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:22:31 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/31 11:34:50 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	if (argc >= 1)
	{
		name = *argv;
		while (*name != 0)
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
	}
}
