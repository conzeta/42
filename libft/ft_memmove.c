/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:19:15 by lduran-f          #+#    #+#             */
/*   Updated: 2025/09/25 19:56:19 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void *ft_memmove(void *dest, const void *src, unsigned int n)
{
    unsigned char temp[n];
    unsigned int i;

    ft_memcpy(temp, src, n);
    dest = ft_memcpy(dest, temp, n);
    
    return (dest);
} */
void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;

	if (((unsigned char *) dest) < ((unsigned char *) src))
		ft_memcpy(dest, src, n);
	else if (((unsigned char *) dest) > ((unsigned char *) src))
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
		}
	}
	return (dest);
}
