#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		num;
	char	*sn;

	num = -543000;
	sn = ft_itoa(num);
	printf("%s\n", sn);
	free(sn);
}
