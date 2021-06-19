/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bous.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:00:03 by idonado        #+#    #+#                */
/*   Updated: 2019/11/25 15:00:06 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;

	if (del == NULL)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current, *del);
	}
	*lst = NULL;
}
