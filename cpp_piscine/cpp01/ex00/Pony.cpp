/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 23:43:14 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/20 21:02:47 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "You've created a pony." << std::endl;
}

Pony::~Pony()
{
	std::cout << "Reached deconstructor, pony died." << std::endl << std::endl;
}
