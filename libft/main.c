#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*pbox;
	char	s[] = "This is the content.";

	pbox = ft_lstnew(s);
	printf("%s\n", pbox->content);
	printf("%p\n", pbox->next);
	free(pbox);
}
