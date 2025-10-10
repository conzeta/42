/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:06:02 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/10 20:11:34 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H //espacios???

# include <stddef.h>
# include <stdlib.h>

void	ft_bzero(void *s, unsigned int n);
int		ft_isalpha(int c);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n); //!
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif