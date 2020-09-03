/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_dot_num.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:24:29 by idonado       #+#    #+#                 */
/*   Updated: 2020/06/21 21:21:58 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data	check_dot_num_b(const char *format, t_data data)
{
	size_t i;

	i = data.i + 1;
	data.i_dot_num.i = i;
	while (ft_isdigit(format[i]))
		i++;
	data.i = i;
	data.dot_num = true;
	data.check_combo = true;
	return (data);
}

t_data			check_dot_num(const char *format, t_data data)
{
	size_t i;

	i = data.i;
	if (format[i] == '.')
	{
		if (ft_isdigit(format[i + 1]))
			return (check_dot_num_b(format, data));
	}
	return (data);
}
