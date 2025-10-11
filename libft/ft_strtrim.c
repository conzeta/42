/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 11:38:40 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/11 13:16:46 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*start;
	size_t	i;
	size_t	setlen;

	start = (char *) s1;
	setlen = ft_strlen(set);
	i = 0;
	while (i < setlen)
	{
		while (*start == set[i])
		{
			start++;
			i = -1; //no válido supongo
		}
		i++;
	}

	return (ret);
}
