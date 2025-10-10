/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 01:38:55 by lduran-f          #+#    #+#             */
/*   Updated: 2025/09/19 01:39:01 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h>

void	ft_putstrn(char *str, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		write(1, str, 1);
		str++;
		i++;
	}
} */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* 
int main() {
    char s1[] = "Hello, Geeks!";
  
    //Ensure destination has enough space
    char s2[50];
	char s3[50];

    //Copying string using strcpy
    ft_strncpy(s2, s1, 4);
	ft_strncpy(s3, s1, 34); //DUDA!!!

    printf("%s\n", s2);
	printf("%s\n", s3);

	printf("longitud s2: %d\n", ft_strlen(s2));
	printf("longitud s3: %d\n", ft_strlen(s3));
	ft_putstrn(s2,4);
	ft_putstrn(s3,34);
    return 0;
} */