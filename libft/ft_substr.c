/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:00:16 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/13 11:29:44 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sslen;

	if (!s)
		return (0);
	sslen = ft_strlen(s);
	if (start >= sslen)
		return (ft_strdup(""));
	sslen -= start;
	if (sslen > len)
		sslen = len;
	sub = malloc(sslen + 1);
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, sslen + 1);
	return (sub);
}
