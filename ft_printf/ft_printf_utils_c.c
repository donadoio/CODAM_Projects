/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_c.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/07 00:35:17 by idonado       #+#    #+#                 */
/*   Updated: 2020/07/07 01:19:48 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_and_free(char *str, int result)
{
	result = print_str(str);
	free(str);
	return (result);
}

t_data	wipe_struct(t_data flags_struct)
{
	flags_struct.left = false;
	flags_struct.zeroes = false;
	flags_struct.mwidth = false;
	flags_struct.dot = false;
	flags_struct.dot_num = false;
	flags_struct.dot_star = false;
	flags_struct.star = false;
	flags_struct.star_dot = false;
	flags_struct.star_dot_num = false;
	flags_struct.star_dot_star = false;
	flags_struct.num_dot = false;
	flags_struct.num_dot_num = false;
	flags_struct.num_dot_star = false;
	flags_struct.check_combo = false;
	return (flags_struct);
}

t_data	print_data(const char *format, t_data data, va_list args)
{
	if (data.type_id == 2)
		data = p_str(format, data, args);
	else if (data.type_id == 1)
		data = p_char(format, data, args);
	else if (data.type_id == 3)
		data = p_ptr(format, data, args);
	else if (data.type_id == 4)
		data = p_int(format, data, args);
	else if (data.type_id == 5)
		data = p_uint(format, data, args);
	else if (data.type_id == 6)
		data = p_hex(format, data, args, 0);
	else if (data.type_id == 7)
		data = p_hex(format, data, args, 1);
	else if (data.type_id == 8)
		data = p_pct(format, data, args);
	return (data);
}
