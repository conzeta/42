/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 04:42:42 by lduran-f          #+#    #+#             */
/*   Updated: 2025/09/21 04:42:49 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int main() {
  char str1[] = "abcd", str2[] = "AbCd", str3[] = "abcd", str4[] = "abcd ";
  int result;

  // comparing strings str1 and str2
  result = ft_strncmp(str1, str2,0);
  printf("Should return 0 = %d\n", result);

  result = ft_strncmp(str1, str2,3);
  printf("Should return 32 = %d\n", result);

  result = ft_strncmp(str1, str2,6);
  printf("Should return 32 = %d\n", result);

  result = ft_strncmp(str2, str1,4);
  printf("Should return -32 = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strncmp(str1, str3, 6);
  printf("Should return 0 = %d\n", result);

  // comparing strings str1 and str4
  result = ft_strncmp(str1, str4,4);
  printf("Should return 0 = %d\n", result);

  result = ft_strncmp(str1, str4,6);
  printf("Should return -32 = %d\n", result);

  return 0;
}
