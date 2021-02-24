#include <iostream>
#include "Class_Fixed.hpp"

int main( void ) {
	Fixed a(4332.36324f);
	std::cout << a.getRawBits() << std::endl;
	std::cout << (float)(a.getRawBits()) / (float)(1 << 8) << std::endl;
	std::cout << a << std::endl;
	return 0;
}