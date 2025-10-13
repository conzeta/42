#include "libft.h"
#include <stdio.h>

static void	print_split(char **res)
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

	result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	print_split(result);
	free_split(result);
}
