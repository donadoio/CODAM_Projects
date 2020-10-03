/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 23:42:57 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/20 21:03:30 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string color, int horns, int legs)
{
	Pony	*Rufus = new Pony();

	Rufus->color = color;
	Rufus->horns = horns;
	Rufus->legs = legs;
	std::cout << "Pony Rufus has a " << Rufus->color << " color, he has " << \
	Rufus->horns << " horn(s) " << "and " << Rufus->legs << " legs, he seems to\
	be galloping around a field, one leg short, and contemplating his existence." \
	<< std::endl;
	delete	Rufus;
}

void	ponyOnTheStack(std::string color, int horns, int legs)
{
	Pony	Pedro;

	Pedro.color = color;
	Pedro.horns = horns;
	Pedro.legs = legs;
	std::cout << "Pony Pedro has a " << Pedro.color << " color, he has " << \
	Pedro.horns << " horn(s) " << "and " << Pedro.legs << " legs, he is standing \
	still, looking at all the fine female Ponies and erect."\
	 << std::endl;
}

int	main(void)
{
	std::string color1;
	std::string color2;

	color1 = "green";
	color2 = "blue";
	ponyOnTheHeap(color1, 1, 3);
	ponyOnTheStack(color2, 2, 4);
	return (0);
}
