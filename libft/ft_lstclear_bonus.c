/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduran-f <lduran-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:54:27 by lduran-f          #+#    #+#             */
/*   Updated: 2025/10/17 00:36:20 by lduran-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	
	if (del && lst)
	{
		while ((*lst) != NULL)
		{
			tmp = *lst;
			lst = &((*lst)->next);
			ft_lstdelone(tmp, del);
		}
	}
}