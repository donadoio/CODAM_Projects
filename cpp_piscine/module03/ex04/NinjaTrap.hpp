/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 22:49:17 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/25 17:33:32 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap	const &original);
	~NinjaTrap();
	NinjaTrap	&operator=(NinjaTrap const &other);
	void		ninjaShoeBox(NinjaTrap &target) const;
	void		ninjaShoeBox(ScavTrap &target) const;
	void		ninjaShoeBox(FragTrap &target) const;
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
};

#endif
