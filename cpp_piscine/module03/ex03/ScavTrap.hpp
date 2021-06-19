/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:37:53 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/25 16:47:04 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		challengeNewcomer() const;
	ScavTrap	&operator=(ScavTrap const &other);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &original);
	~ScavTrap();
};

#endif
