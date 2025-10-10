/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:06:02 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/10 00:04:15 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H //espacios???

# include <stddef.h>
# include <stdlib.h>

void	ft_bzero(void *s, unsigned int n);
int		ft_isalpha(int c);
size_t	ft_strlen(char *str);

#endif