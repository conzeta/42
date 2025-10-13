/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:00:09 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/13 12:21:55 by lduran-f         ###   ########.fr       */
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

static const char	*getword(const char *t, char c, char **split,
	unsigned int wi)
{
	size_t			wordlen;
	unsigned int	i;

	wordlen = 0;
	while (t[wordlen] != 0 && t[wordlen] != c)
		wordlen++;
	split[wi] = ft_substr(t, 0, wordlen);
	if (split[wi])
		return (t + wordlen);
	else
	{
		i = 0;
		while (i < wi)
		{
			free(split[i]);
			i++;
		}
		free(split);
		return (0);
	}
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	wi;

	if (!s)
		return (0);
	split = (char **)malloc(sizeof(char *) * (1 + wordcount(s, c)));
	if (!split)
		return (0);
	wi = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			s = getword(s, c, split, wi);
			if (!s)
				return (0);
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
	int	i;

	i = 0;
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
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(void)
{
	char	**result;

	result = ft_split("lorem ipsum", 'i');
	print_split(result);
	free_split(result);
} */
