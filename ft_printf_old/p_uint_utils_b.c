/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p_uint_utils_b.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/26 15:51:07 by idonado       #+#    #+#                 */
/*   Updated: 2020/07/01 18:37:30 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data	p_uint_num_dot_num(const char *format, t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.min_width = ft_atoi(format + data.i_num_dot_num.i);
	vars.precision = ft_atoi(format + data.i_num_dot_num.j);
	vars.unumber = va_arg(args, unsigned int);
	vars = uint_num_dot_num_c(vars);
	if (vars.print_fail == true)
		return (print_fail(data, vars));
	if (vars.str_width < vars.min_width)
	{
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = int_num_dot_num_b(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	return (data);
}

t_data	p_uint_num_dot_star(const char *format, t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.min_width = ft_atoi(format + data.i_num_dot_star.i);
	vars.precision = va_arg(args, int);
	vars.unumber = va_arg(args, unsigned int);
	if (vars.precision < 0 && vars.unumber > 0)
		vars.precision = vars.min_width;
	else if (vars.precision < 0 && vars.unumber == 0)
		vars.precision = 1;
	vars = uint_num_dot_num_c(vars);
	if (vars.print_fail == true)
		return (print_fail(data, vars));
	if (vars.str_width < vars.min_width)
	{
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = int_num_dot_num_b(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	return (data);
}

t_data	p_uint_star_dot_num(const char *format, t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.min_width = va_arg(args, int);
	data = switch_negative(&vars.min_width, data);
	vars.precision = ft_atoi(format + data.i_star_dot_num.i);
	vars.unumber = va_arg(args, unsigned int);
	vars = uint_num_dot_num_c(vars);
	if (vars.print_fail == true)
		return (print_fail(data, vars));
	if (vars.str_width < vars.min_width)
	{
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = int_num_dot_num_b(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	return (data);
}

t_data	p_uint_star_dot_star(t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.min_width = va_arg(args, int);
	data = switch_negative(&vars.min_width, data);
	vars.precision = va_arg(args, int);
	vars.unumber = va_arg(args, int);
	vars = uint_num_dot_num_c(vars);
	if (vars.precision < 0 && vars.unumber > 0)
		vars.precision = vars.min_width;
	else if (vars.precision < 0 && vars.unumber == 0)
		vars.precision = 1;
	if (vars.print_fail == true)
		return (print_fail(data, vars));
	if (vars.str_width < vars.min_width)
	{
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = int_num_dot_num_b(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	return (data);
}

t_data	p_uint_mwidth(const char *format, t_data data, va_list args)
{
	t_vars	vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.unumber = va_arg(args, unsigned int);
	vars.str = ft_itoa_unsigned(vars.unumber);
	vars.min_width = ft_atoi(format + data.i_mwidth.i);
	vars.str_width = ft_strlen(vars.str);
	if (vars.min_width > vars.str_width)
	{
		vars.min_width = vars.min_width - vars.str_width;
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = uint_mwidth(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	free(vars.str);
	return (data);
}
