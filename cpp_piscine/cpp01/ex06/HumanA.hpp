/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 17:41:24 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/25 18:29:17 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon		&_weapon;
public:
	void		attack() const;
	void		setName(std::string);
	void		setWeapon(Weapon weapon);
	HumanA(/* args */);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif