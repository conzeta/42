#include "libft.h"
#include <stdio.h>

static void	print_split(char **res)
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
}

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
