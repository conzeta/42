/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:00:09 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/13 11:27:15 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *t, char c)
{
	char	pc;
	size_t	wc;

	pc = c;
	wc = 0;
	while (*t != '\0')
	{
		if ((*t != c) && (pc == c))
			wc++;
		pc = *t;
		t++;
	}
	return (wc);
}

static const char	*getword(const char *t, char c, char **split, size_t wi)
{
	size_t	wordlen;

	wordlen = 0;
	while (t[wordlen] != 0 && t[wordlen] != c)
		wordlen++;
	split[wi] = ft_substr(t, 0, wordlen);
	return (t + wordlen);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	wc;
	size_t	wi;

	if (!s)
		return (0); //comportamiento esperado?
	wc = wordcount(s, c);
	split = (char **)malloc(sizeof(char *) * (1 + wc));
	if (!split)
		return (0);
	wi = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			s = getword(s, c, split, wi);
			wi++;
		}
		else
			s++;
	}
	split[wi] = NULL;
	return (split);
}

/* static void	print_split(char **res)
{
	int	i = 0;

	if (!res)
	{
		printf("(null)\n");
		return ;
	}
	while (res[i])
	{
		printf("[%d]: \"%s\"\n", i, res[i]);
		i++;
	}
	printf("[%d]: NULL\n", i);
}

static void	free_split(char **split)
{
	int	i;

	if (!split)
		return;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
} */

/* #include <stdio.h>

int	main(void)
{
	char **result;

	printf("=== Caso 1 ===\n");
	result = ft_split("hola mundo 42", ' ');
	print_split(result);
	free_split(result);

	printf("\n=== Caso 2 ===\n");
	result = ft_split("   hola   mundo   42   ", ' ');
	print_split(result);
	free_split(result);

	printf("\n=== Caso 3 ===\n");
	result = ft_split("hola", ' ');
	print_split(result);
	free_split(result);

	printf("\n=== Caso 4 ===\n");
	result = ft_split("", ' ');
	print_split(result);
	free_split(result);

	printf("\n=== Caso 5 ===\n");
	result = ft_split("----", '-');
	print_split(result);
	free_split(result);

	printf("\n=== Caso 6 ===\n");
	result = ft_split(NULL, ' ');
	print_split(result);
	free_split(result);
}
 */