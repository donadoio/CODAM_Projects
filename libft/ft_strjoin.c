/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 18:06:27 by idonado        #+#    #+#                */
/*   Updated: 2019/12/03 13:33:14 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	length;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, length);
	ft_strlcat(str, s2, length);
	return (str);
}
