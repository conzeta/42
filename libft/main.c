#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const	mystring[] = "+-*-hola*persona+--*+";
	char const	set[] = "-*+";
	char		*ret;

	ret = ft_strtrim(mystring, set);
	printf("%s", ret);
}
