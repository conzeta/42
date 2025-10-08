/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:39:51 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/08 14:23:13 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		len;

	len = ft_strlen(s);
	if (len <= 0)
		return (0);
	ret = malloc(len + 1);
	ret = ft_strcpy(ret, s);
	return (ret);
}
