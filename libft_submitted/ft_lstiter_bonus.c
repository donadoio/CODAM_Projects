/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 03:00:14 by idonado        #+#    #+#                */
/*   Updated: 2019/11/30 14:50:12 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst != NULL)
	{
		if (lst->content != NULL)
			f(lst->content);
		lst = lst->next;
	}
}
