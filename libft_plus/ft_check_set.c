/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_set.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/05 16:17:21 by idonado        #+#    #+#                */
/*   Updated: 2020/02/05 16:29:52 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// This function checks if the character passed matches any of the characters of set.

#include "libft.h"

int ft_check_set(char c, char *set)
{
    size_t  i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
