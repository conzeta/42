/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:36:56 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/19 20:11:58 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_error()
{
	write(1, "E", 1); 
	write(1, "r", 1);
	write(1, "r", 1);
	write(1, "o", 1);
	write(1, "r", 1);
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc != 17)
	{
		ft_error();
		return (0);
	}
	int	i;

	i = 1;
	argv++;
	while (i < argc)
	{
		if (!(**argv > 48 && **argv < 53))
		{
			ft_error();
			return (0);
		}
		argv++;
		i++;
	}
	

	return (0);
}
