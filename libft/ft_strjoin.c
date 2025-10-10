/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:12:12 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/10 19:47:46 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*sjoin;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sjoin = malloc(s1len + s2len + 1);
	if (!sjoin)
		return (0);
	ft_memcpy(sjoin, s1, s1len);
	ft_memcpy(sjoin + s1len, s2, s2len);
	sjoin[s1len + s2len] = '\0';
	return (sjoin);
}
