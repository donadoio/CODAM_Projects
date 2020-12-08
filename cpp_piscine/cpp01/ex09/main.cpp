/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 16:17:39 by idonado       #+#    #+#                 */
/*   Updated: 2020/12/08 18:18:59 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(void)
{
	Logger logger("log01");

	logger.log("toConsole", "First log message");
	logger.log("toFile", "Second log message");
	logger.log("toFile", "Third log message");
	logger.log("toFile", "Fourth log message");

	Logger logger2("log02");
	logger2.log("toConsole", "First log message");
	logger2.log("toFile", "Second log message");
	logger2.log("toFile", "Third log message");
	logger2.log("toFile", "Fourth log message");

	return (0);
}