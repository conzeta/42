#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	i = 'A';
    while (i <= 'Z')
    {
        printf("%d", ft_isalpha(i));
        i++;
    }
}
