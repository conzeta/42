/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:25:36 by lduran-f          #+#    #+#             */
/*   Updated: 2025/07/18 13:07:49 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int main() {
  char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd", str4[] = "abcd ";
  int result;

  // comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2) = %d\n", result);

  result = ft_strcmp(str2, str1);
  printf("ft_strcmp(str2, str1) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("ft_strcmp(str1, str3) = %d\n", result);

  // comparing strings str1 and str4
  result = ft_strcmp(str1, str4);
  printf("ft_strcmp(str1, str4) = %d\n", result);

  return 0;
} */