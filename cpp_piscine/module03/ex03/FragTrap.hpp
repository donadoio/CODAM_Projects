/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:28:12 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/25 16:46:40 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		vaulthunter_dot_exe(std::string const &target);
	FragTrap	&operator=(FragTrap const &other);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &original);
	~FragTrap();
};

#endif
