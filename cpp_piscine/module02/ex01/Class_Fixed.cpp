/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Class_Fixed.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/21 15:47:59 by idonado       #+#    #+#                 */
/*   Updated: 2021/02/24 15:17:12 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Class_Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

//Constructors

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default Constructor Called." << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called." << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &original)
{
	std::cout << "Copy Constructor Called." << std::endl;
	this->operator=(original);
}

Fixed::Fixed(float const value)
{
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(int const value)
{
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

// Operator Overloads
Fixed	&Fixed::operator=(Fixed const &current)
{
	std::cout << "Assignment Operator Called." << std::endl;
	this->_fixedPointValue = current.getRawBits();
	return *this;
}

std::ostream	&Fixed::operator<<(std::ostream &output, Fixed const object)
{
	output << "What?";
	return (output);
}

//Member functions
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits() member function called." << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits(int const raw) member function called." << std::endl;
	this->_fixedPointValue = raw;
}

int		Fixed::toInt(void)
{
	int	result;

	result = (int)this->getRawBits() / (int)(1 << this->_fractionalBits);
	return (result);
}

float	Fixed::toFloat(void)
{
	float	result;

	result = (float)this->getRawBits() / (float)(1 << this->_fractionalBits);
	return (result);
}