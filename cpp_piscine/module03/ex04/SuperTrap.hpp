/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 00:15:26 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/25 17:27:30 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
	SuperTrap();
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &other);
	~SuperTrap();
	SuperTrap	&operator=(SuperTrap const &other);
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
};

#endif