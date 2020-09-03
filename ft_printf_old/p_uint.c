/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p_uint.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/19 13:42:47 by idonado       #+#    #+#                 */
/*   Updated: 2020/06/26 17:01:27 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data	p_uint_num_dot(const char *format, t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.min_width = ft_atoi(format + data.i_num_dot.i);
	vars.unumber = va_arg(args, unsigned int);
	vars.str = ft_itoa_unsigned(vars.unumber);
	if (vars.unumber == 0)
		vars.str[0] = '\0';
	if (vars.str == NULL)
		return (print_fail(data, vars));
	vars.str_width = ft_strlen(vars.str);
	if (vars.str_width < vars.min_width)
	{
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = uint_num_dot(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	free(vars.str);
	return (data);
}

static t_data	p_uint_star_dot(t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = uint_sd_vars(vars, data, args);
	if (vars.str == NULL)
		return (print_fail(data, vars));
	vars.str_width = ft_strlen(vars.str);
	if (vars.str_width < vars.min_width)
	{
		vars.spaces = ft_strdup("");
		if (vars.spaces == NULL)
			return (print_fail(data, vars));
		vars = uint_num_dot(data, vars);
		if (vars.str == NULL)
			return (print_fail(data, vars));
	}
	data.result = print_str(vars.str);
	free(vars.str);
	return (data);
}

static t_data	p_uint_dot(t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.unumber = va_arg(args, unsigned int);
	if (vars.unumber == 0)
		vars.str = ft_strdup("");
	else
		vars.str = ft_itoa_unsigned(vars.unumber);
	if (vars.str == NULL)
		return (print_fail(data, vars));
	data.result = print_str(vars.str);
	free(vars.str);
	return (data);
}

static	t_data	check_uint(const char *format, t_data data, va_list args)
{
	if (data.mwidth == true)
		data = p_uint_mwidth(format, data, args);
	else if (data.star == true)
		data = p_uint_star(data, args);
	else if (data.dot_star == true)
		data = p_uint_dot_star(data, args);
	else if (data.dot_num == true)
		data = p_uint_dot_num(format, data, args);
	else if (data.num_dot == true)
		data = p_uint_num_dot(format, data, args);
	return (data);
}

t_data			p_uint(const char *format, t_data data, va_list args)
{
	char	*str;

	data.format_detected = false;
	data = check_uint(format, data, args);
	if (data.star_dot == true)
		data = p_uint_star_dot(data, args);
	else if (data.dot == true)
		data = p_uint_dot(data, args);
	else if (data.num_dot_num == true)
		data = p_uint_num_dot_num(format, data, args);
	else if (data.num_dot_star == true)
		data = p_uint_num_dot_star(format, data, args);
	else if (data.star_dot_num == true)
		data = p_uint_star_dot_num(format, data, args);
	else if (data.star_dot_star == true)
		data = p_uint_star_dot_star(data, args);
	else if (data.format_detected == false)
	{
		str = ft_itoa_unsigned(va_arg(args, unsigned int));
		data.result = print_str(str);
		free(str);
	}
	return (data);
}
