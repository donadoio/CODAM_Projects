/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:38:37 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/26 17:33:59 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
public:
	std::string firstname, lastname, nickname, login,
	postal_address, email_address, phone_number,
	birthday_date, favorite_meal, underwear_color,
	darkest_secret;
	static	int	slots_left;
	void	add();
	void	list_info();
	Contact();
	~Contact();
};
#endif
