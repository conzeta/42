/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:39:49 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/17 17:49:57 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (0);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
//(*newnode).content = content;
//(*newnode).next = NULL;

/* #include <stdio.h>

int	main(void)
{
	t_list	*pbox;
	char	s[] = "This is the content.";

	pbox = ft_lstnew(s);
	printf("%s\n", (char *)pbox->content);
	printf("%p\n", pbox->next);
	free(pbox);
} */