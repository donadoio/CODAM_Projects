/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:37:53 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 17:43:04 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	ScavTrap();

	public:
	void		challengeNewcomer();
	ScavTrap	&operator=(ScavTrap const &original);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &original);
	~ScavTrap();
};

#endif
