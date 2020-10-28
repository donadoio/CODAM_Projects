/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 23:43:11 by idonado       #+#    #+#                 */
/*   Updated: 2020/10/28 18:02:42 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
public:
	std::string	name;
	std::string color;
	int			legs;
	int			horns;
	void		fly();
	void		jump(int meters);
	Pony(std::string name_init, std::string color_init, int legs_init, int horns_init);
	~Pony();
};
