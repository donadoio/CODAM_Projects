/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_chrjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/05 16:09:36 by idonado        #+#    #+#                */
/*   Updated: 2020/02/05 16:09:45 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_chrjoin(char *str, int c)
{
	char	*result;
	size_t	i;

	if (!str || !c)
		return (NULL);
	result = malloc(ft_strlen(str) + 2);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = c;
	i++;
	result[i] = '\0';
	return (result);
}
