#include <stdio.h>
int	main()
{
	int **range;
	int min = -3;
	int	max = 2;
	int res;
	int *arr;

	arr = NULL;
	*range = 0;
	res = ft_ultimate_range(range, min, max);
	printf("%d\n", res);
	int i = 0;
	while (i < max - min)
	{
		printf("%d", *range[i]);
		i++;
	}
	free(*range);
}