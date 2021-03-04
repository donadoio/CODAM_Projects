/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:37:53 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 23:48:07 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap	&operator=(ScavTrap const &rhs);
	void		challengeNewcomer() const;
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &original);
	~ScavTrap();
};

#endif
