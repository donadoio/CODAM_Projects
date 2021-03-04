/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:28:12 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 23:52:46 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap	&operator=(FragTrap const &other);
	void		vaulthunter_dot_exe(std::string const &target);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &original);
	~FragTrap();
};

#endif
