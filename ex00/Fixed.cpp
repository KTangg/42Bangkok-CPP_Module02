#include "Fixed.hpp"

int const	Fixed::_fraction = 8;

// Default Class Constructor
Fixed::Fixed(void) : _number(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

// Copy Class Constructor
Fixed::Fixed(Fixed const &src)
{
	// Make your Copy here
	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
}

// Class Deconstructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

// Assign Operator Overlaod
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	// Make your Assignment here
	this->_number = rhs.getRawBits();
	return (*this);
}

// Get _number private attribute
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

// Set _number to given int
void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}
