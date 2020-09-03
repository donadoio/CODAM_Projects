/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/22 14:31:10 by idonado        #+#    #+#                */
/*   Updated: 2020/01/29 17:58:40 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
free_and_return_null
----------------------------------
This function is basically only to be used on this project within the customized version of ft_strjoin()
*/
char	*free_and_return_null(char *s)
{
	free(s);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t char_count;

	char_count = 0;
	while (str[char_count] != '\0')
	{
		char_count++;
	}
	return (char_count);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcpy;
	char	*srccpy;
	int		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dstcpy = (char*)dst;
	srccpy = (char*)src;
	if (dst < src)
		while (i < (int)len)
		{
			dstcpy[i] = srccpy[i];
			i++;
		}
	else
	{
		i = (int)len;
		while (i != 0)
		{
			dstcpy[i - 1] = srccpy[i - 1];
			i--;
		}
	}
	return (dstcpy);
}

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*tmp;

	size = 0;
	i = 0;
	size = ft_strlen(s1);
	tmp = malloc(sizeof(char) * size + 1);
	if (tmp == NULL)
		return (NULL);
	while (i < size)
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
ft_strjoin
----------------------------------
This standard library function is commented because it is not the same ft_strjoin used on my library in the libft repo.
It is less safe yet and optimized and customized for this function's purpose and should not be copied exactly as is onto any other function.
*/
char	*ft_strjoin(char *s1, char *s2, size_t i, size_t j)
{
	char	*temp;

	if (!s1)
		return (NULL);
	if (!s2)
		return (free_and_return_null(s1));
	temp = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!temp)
		return (free_and_return_null(s1));
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		temp[i] = s2[j];
		i++;
		j++;
	}
	temp[i] = 0;
	free(s1);
	return (temp);
}
