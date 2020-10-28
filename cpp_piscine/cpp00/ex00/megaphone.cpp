/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 18:38:24 by idonado       #+#    #+#                 */
/*   Updated: 2020/10/26 16:29:38 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i;
	int current_arg;
	int	max_args;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		current_arg = 1;
		max_args = argc - 1;
		i = 0;
		while (current_arg <= max_args)
		{
			std::cout << (char)std::toupper(argv[current_arg][i]);
			i++;
			if (argv[current_arg][i] == '\0')
			{
				current_arg++;
				i = 0;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
