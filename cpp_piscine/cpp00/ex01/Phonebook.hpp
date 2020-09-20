/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:38:37 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/20 13:44:38 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhonebookSlots
{
private:
	/* data */
public:
	int	current_slot;
	std::string command, firstname[10], lastname[10], nickname[10];
	bool full;
	PhonebookSlots(/* args */);
	~PhonebookSlots();
};

void	phonebook_menu(PhonebookSlots &slots);
void	add_contact(PhonebookSlots &slots);
void	phonebook_add_menu(PhonebookSlots &slots);
void	phonebook_search_menu(PhonebookSlots &slots);