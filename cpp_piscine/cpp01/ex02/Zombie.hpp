/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 00:14:55 by idonado       #+#    #+#                 */
/*   Updated: 2020/10/29 00:29:03 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>

class Zombie
{
private:
	std::string	name;
	std::string	type;
public:
	void	announce() const;
	Zombie(std::string name, std::string type);
	~Zombie();
};

#endif
