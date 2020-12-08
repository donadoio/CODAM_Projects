/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 16:18:07 by idonado       #+#    #+#                 */
/*   Updated: 2020/12/08 18:09:56 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>

class Logger
{
	public:
	Logger(std::string filename);
	void		log(std::string const &dest, std::string const &message);
	private:
	Logger();
	std::string	_filename;
	void		logToConsole(std::string const &text);
	void		logToFile(std::string const &text);
	std::string	makeLogEntry(std::string const &text);
};

#endif