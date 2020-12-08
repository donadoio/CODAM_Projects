/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 16:20:27 by idonado       #+#    #+#                 */
/*   Updated: 2020/12/08 18:16:15 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <time.h>
#include <fstream>

Logger::Logger(std::string filename) : _filename(filename)
{
	return;
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	std::string dest_func [] = {"toConsole", "toFile"};
	typedef void	(Logger::*Functions)(std::string const &text);
	int i;

	Functions function[2] = { &Logger::logToConsole, &Logger::logToFile };
	i = 0;
	while (i <= 1)
	{
		if (dest == dest_func[i])
		{
			(this->*function[i])(message);
			return ;
		}
		i++;
	}
	std::cout << "Invalid logger destination." << std::endl;
	return ;
}

std::string	Logger::makeLogEntry(std::string const &message)
{
	time_t rawtime;
  	struct tm * timeinfo;
  	char buffer [80];

  	time (&rawtime);
  	timeinfo = localtime (&rawtime);

  	strftime (buffer,80,"[%D][%R]",timeinfo);
	std::string result(buffer);
	result += message;
	return (result);
}

void	Logger::logToConsole(std::string const &text)
{
	std::string result = this->makeLogEntry(text);
	std::cout << result << std::endl;
	return ;
}

void	Logger::logToFile(std::string const &text)
{
	std::string result = this->makeLogEntry(text);
	std::ofstream write(_filename.c_str(), std::ios::app);
	write << result << std::endl;
	return ;
}