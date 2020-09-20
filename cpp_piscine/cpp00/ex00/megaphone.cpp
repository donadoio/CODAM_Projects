/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 18:38:24 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/18 12:36:55 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argv, char **gv)
{
	int i;
	int current_arg;
	int	max_args;

	if (argv == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		current_arg = 1;
		max_args = argv - 1;
		i = 0;
		while (current_arg <= max_args)
		{
			std::cout << (char)std::toupper(gv[current_arg][i]);
			i++;
			if (gv[current_arg][i] == '\0')
			{
				current_arg++;
				i = 0;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
