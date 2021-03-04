/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:30:03 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/01 23:11:46 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap lilly("lilly");
	ScavTrap stan(lilly);

	FragTrap bobby("bobby");

	lilly.beRepaired(22);
	lilly.challengeNewcomer();
	lilly.challengeNewcomer();
	lilly.challengeNewcomer();
	lilly.meleeAttack("rufus");
	lilly.rangedAttack("rudolf");
	lilly.takeDamage(43);
	lilly.takeDamage(55);
	lilly.meleeAttack("fred");
	lilly.takeDamage(44);
	lilly.beRepaired(22);
	lilly.meleeAttack("feddy");
	lilly.takeDamage(22);
	return (0);
}
