/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:40:22 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/22 17:28:10 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*new;
	void	*fcontent;

	if (!f || !lst || !del)
		return (0);
	ret = NULL;
	while (lst != NULL)
	{
		fcontent = f(lst->content);
		new = ft_lstnew(fcontent);
		if (!new)
		{
			del(fcontent);
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}
/*  static void	*special_toupper(void *v)
{
	int	i;
	char *c = (char *)v;
	
	i = 0;
	while (c[i])
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
		i++;
	}
	return (c);
}
static void	delete(void *cont)
{
	free(cont);
}

#include <stdio.h>
int main()
{
	t_list	*head;
	t_list	*tail;
	t_list	*result;
	char	s[] = "holajhhvwu";
	char	t[] = "bobob";
	head = ft_lstnew(s);
	tail = ft_lstnew(t);
	ft_lstadd_back(&head, tail);
	result = ft_lstmap(head, special_toupper, delete);

	while(result)
	{
	printf("%s\n", (char *)result->content);
	result = result->next;
	}

} */