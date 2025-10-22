#include "libft.h"
#include <stdio.h>

int	main(void)
{
   const char *string12 = "a_a_a_a_z";
   const char *string22 = "a_z";
   char *result;

   result = ft_strnstr(string12, string22, 10);
   printf("mío: %s\n", result);
}
