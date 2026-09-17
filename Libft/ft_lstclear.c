/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:18:32 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/17 13:27:33 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*need_del;

	if (!lst)
		return ;
	while ((*lst) != NULL)
	{
		need_del = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(need_del, del);
	}
	lst = NULL;
}
