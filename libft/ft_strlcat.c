/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 19:40:39 by idonado        #+#    #+#                */
/*   Updated: 2019/11/30 15:15:46 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dstsize || dstsize < dstlen)
		return (dstlen + srclen - (dstlen - dstsize));
	dstsize -= dstlen;
	ft_strlcpy(dst + dstlen, src, dstsize);
	return (dstlen + srclen);
}
