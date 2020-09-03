/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 18:04:25 by idonado        #+#    #+#                */
/*   Updated: 2019/11/28 07:32:45 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *p;

	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (count * size));
	return (p);
}
