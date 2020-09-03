/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p_str.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/16 19:17:55 by idonado       #+#    #+#                 */
/*   Updated: 2020/07/01 16:36:35 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data	p_str_mwidth(const char *format, t_data data, va_list args)
{
	t_vars vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.str = ft_strdup(va_arg(args, char*));
	if (vars.str == NULL)
		vars.str = ft_strdup("(null)");
	if (vars.str == NULL)
		return (print_fail(data, vars));
	vars.str_width = ft_strlen(vars.str);
	vars.min_width = (size_t)ft_atoi(format + data.i_mwidth.i);
	if (vars.str_width >= vars.min_width)
	{
		data.result = print_str(vars.str);
		free(vars.str);
	}
	else
		data = str_mwidth(vars, data);
	return (data);
}

static t_data	p_str_star(t_data data, va_list args)
{
	t_vars	vars;

	data.format_detected = true;
	vars.i = 0;
	vars = vars_init(vars);
	vars.min_width = va_arg(args, int);
	if (vars.min_width < 0)
	{
		vars.min_width = vars.min_width * -1;
		data.left = true;
	}
	vars.str = ft_strdup(va_arg(args, char*));
	if (vars.str == NULL)
		vars.str = ft_strdup("(null)");
	if (vars.str == NULL)
		return (print_fail(data, vars));
	vars.str_width = (int)ft_strlen(vars.str);
	if (vars.str_width >= vars.min_width)
	{
		data.result = print_str(vars.str);
		free(vars.str);
	}
	else
		data = str_mwidth(vars, data);
	return (data);
}

static t_data	p_str_dot_star(t_data data, va_list args)
{
	int		max_size;
	char	*str;

	data.format_detected = true;
	max_size = va_arg(args, int);
	str = ft_strdup(va_arg(args, char*));
	if (str == NULL)
		str = ft_strdup("(null)");
	if (str == NULL)
	{
		data.result = -1;
		return (data);
	}
	if (max_size > -1 && max_size < (int)ft_strlen(str))
	{
		str[max_size] = 0;
		data.result = print_str(str);
	}
	else
		data.result = print_str(str);
	free(str);
	return (data);
}

t_data			check_str(const char *format, t_data data, va_list args)
{
	if (data.mwidth == true)
		data = p_str_mwidth(format, data, args);
	else if (data.star == true)
		data = p_str_star(data, args);
	else if (data.dot_star == true)
		data = p_str_dot_star(data, args);
	else if (data.star_dot_star == true)
		data = p_str_star_dot_star(data, args);
	else if (data.star_dot == true)
		data = p_str_star_dot(data, args);
	else if (data.star_dot_num == true)
		data = p_str_star_dot_num(format, data, args);
	return (data);
}

t_data			p_str(const char *format, t_data data, va_list args)
{
	char	*str;

	data.format_detected = false;
	data = check_str(format, data, args);
	if (data.num_dot_num == true)
		data = p_str_num_dot_num(format, data, args);
	else if (data.num_dot_star == true)
		data = p_str_num_dot_star(format, data, args);
	else if (data.num_dot == true)
		data = p_str_num_dot(format, data, args);
	else if (data.dot_num == true)
		data = p_str_dot_num(format, data, args);
	else if (data.dot == true)
		data = p_str_dot(data, args);
	else if (data.format_detected == false)
	{
		str = ft_strdup(va_arg(args, char*));
		if (str == NULL)
			str = ft_strdup("(null)");
		data.result = print_str(str);
		free(str);
	}
	return (data);
}
