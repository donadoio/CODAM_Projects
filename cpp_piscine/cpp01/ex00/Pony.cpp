/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 23:43:14 by idonado       #+#    #+#                 */
/*   Updated: 2020/07/26 00:11:25 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color, int legs, int horns)
{
	this->color = color;
	this->legs = legs;
	this-> horns = horns;

	std::cout << "You've created a " << color << " Pony, he has " << legs << " legs and " << horns << " horn(s)" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Reached deconstructor" << std::endl;
}
