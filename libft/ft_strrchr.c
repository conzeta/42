/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 20:00:26 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/11 12:33:45 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*r;

	p = (char *) s;
	r = NULL;
	while (*p != 0)
	{
		if (*p == (unsigned char) c)
			r = p;
		p++;
	}
	if (*p == (unsigned char) c)
		r = p;
	return (r);
}
