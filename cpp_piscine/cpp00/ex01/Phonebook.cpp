/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:40:31 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/20 13:40:40 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhonebookSlots::PhonebookSlots(/* args */)
{
	std::cout << "Created contact slots successfully." << std::endl << std::endl;
}

PhonebookSlots::~PhonebookSlots()
{
	std::cout << "Data has been deleted and program will terminate..." << std::endl;
}