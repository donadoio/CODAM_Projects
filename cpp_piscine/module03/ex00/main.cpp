/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 18:55:06 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 19:21:05 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap lilly("Lilly");

	lilly.rangedAttack("Austin");
	lilly.meleeAttack("Austin");
	lilly.takeDamage(104);
	lilly.beRepaired(50);
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.beRepaired(4);
	lilly.takeDamage(60);

	lilly.rangedAttack("peanut");
	lilly.meleeAttack("peanut");
	lilly.takeDamage(4);
	lilly.beRepaired(5);
	lilly.vaulthunter_dot_exe("peanut");

	FragTrap lele(lilly);
	FragTrap lolo = lele;
}