/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 18:27:26 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/18 19:22:47 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int	main(void)
{
	std::string	str1 = "HI THIS IS BRAIN";
	std::string	*str2 = &str1;
	std::string	&str3 = str1;

	std::cout << *str2 << std::endl;
	std::cout << str3 << std::endl;
	return (0);
}