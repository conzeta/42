#include "libft.h"
#include <stdio.h>

static void	special_toupper(unsigned int i, char *c)
{
	i = i;
	if (*c > 96 && *c < 123)
		*c -= 32;
	return ;
}

int	main(void)
{
	char	str[] = "Dubi doo, yo quiero ser como tu!";

	ft_striteri(str, special_toupper);
	printf("%s\n", str);
}
