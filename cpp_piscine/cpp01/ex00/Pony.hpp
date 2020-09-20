/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 23:43:11 by idonado       #+#    #+#                 */
/*   Updated: 2020/07/26 00:01:12 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
public:
	std::string color;
	int			legs;
	int			horns;
	Pony(std::string color, int legs, int horns);
	~Pony();
};
