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

// Int overload Constructor
Fixed::Fixed(int const nb) : _number(nb << _fraction)
{
	std::cout << "Int Constructor Called" << std::endl;
}

// Float overload Constructor
Fixed::Fixed(float const nb) : _number(roundf(nb * (1 << _fraction)))
{
	std::cout << "Float Constructor Called" << std::endl;
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

int	Fixed::toInt(void) const
{
	return (_number >> _fraction);
}

float	Fixed::toFloat(void) const
{
	return (_number / (float)(1 << _fraction));
}

// Set _number to given int
void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

// Redirection in overload
std::ostream	&operator<<(std::ostream &out, Fixed const &rhs)
{
	out << (rhs.toFloat());
	return (out);
}
