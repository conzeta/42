/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:43:21 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/30 19:41:41 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	printargs(int argc, char **argv)
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

int	main(int argc, char **argv)
{
	int		i;
	char	*pi;
	char	*pi2;

	i = 1;
	while (i < argc - 1)
	{
		pi = argv[i];
		pi2 = argv[i + 1];
		if (ft_strcmp(pi, pi2) > 0)
		{
			argv[i] = argv[i + 1];
			argv[i + 1] = pi;
			i = 0;
		}
		i++;
	}
	printargs(argc, argv);
}
