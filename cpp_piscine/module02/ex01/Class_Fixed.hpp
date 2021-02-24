/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Class_Fixed.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/21 15:48:43 by idonado       #+#    #+#                 */
/*   Updated: 2021/02/24 15:13:08 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_FIXED_HPP
#define CLASS_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
	int	_fixedPointValue;
	static const int _fractionalBits;

	public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &original);
	Fixed(float const value);
	Fixed(int const value);

	Fixed			&operator=(Fixed const &current);
	std::ostream	&operator<<(std::ostream &output, Fixed const object);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat(void);
	int		toInt(void);
};

#endif