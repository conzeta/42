#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int		num;
	char	*sn;

	num = 0;
	sn = ft_itoa(num);
	printf("%s\n", sn);
	free(sn);
}
