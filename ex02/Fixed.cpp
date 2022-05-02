#include "Fixed.hpp"

int const	Fixed::_fraction = 8;

// Clas Constructor && Deconstructor Part ************************************************//

// Default Class Constructor
Fixed::Fixed(void) : _number(0)
{
	//std::cout << "Default Constructor Called" << std::endl;
}

// Copy Class Constructor
Fixed::Fixed(Fixed const &src)
{
	// Make your Copy here
	//std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
}

// Int overload Constructor
Fixed::Fixed(int const nb) : _number(nb << _fraction)
{
	//std::cout << "Int Constructor Called" << std::endl;
}

// Float overload Constructor
Fixed::Fixed(float const nb) : _number(roundf(nb * (1 << _fraction)))
{
	//std::cout << "Float Constructor Called" << std::endl;
}

// Class Deconstructor
Fixed::~Fixed(void)
{
	//std::cout << "Destructor Called" << std::endl;
	return ;
}


// Comparison Overload Part ********************************************************//

// Greater than Overload
bool	Fixed::operator>(Fixed const &rhs)
{
	if (this->_number > rhs.getRawBits())
		return (true);
	return (false);
}

// Greater than or Equal to Overload
bool	Fixed::operator>=(Fixed const &rhs)
{
	if (this->_number >= rhs.getRawBits())
		return (true);
	return (false);
}

// Less than Overload
bool	Fixed::operator<(Fixed const &rhs)
{
	if (this->_number < rhs.getRawBits())
		return (true);
	return (false);
}

// Less than or Equal to Overload
bool	Fixed::operator<=(Fixed const &rhs)
{
	if (this->_number <= rhs.getRawBits())
		return (true);
	return (false);
}

// Equal to Overload
bool	Fixed::operator==(Fixed const &rhs)
{
	if (this->_number == rhs.getRawBits())
		return (true);
	return (false);
}

// Not Equal to Overload
bool	Fixed::operator!=(Fixed const &rhs)
{
	if (this->_number != rhs.getRawBits())
		return (true);
	return (false);
}



// Operator Overload Part ********************************************************//

// Assign Operator Overload
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	//std::cout << "Copy Assignment Operator Called" << std::endl;
	// Make your Assignment here
	this->_number = rhs.getRawBits();
	return (*this);
}

// Plus Operator Overload
Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits(_number + rhs.getRawBits());
	return (result);
}

// Minus Operator Overload
Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits(_number - rhs.getRawBits());
	return (result);
}

// Multiply Operator Overload
Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits((_number * rhs.getRawBits()) >> _fraction);
	return (result);
}

// Divide Operator Overload
Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed	result(_number / float(rhs.getRawBits()));

	return (result);
}

// Pre-increment Operator Overload
Fixed	&Fixed::operator++(void)
{
	_number++;

	return (*this);
}

// Post-increment Operator Overload
Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}

// Pre-decrement Operator Overload
Fixed	&Fixed::operator--(void)
{
	_number--;

	return (*this);
}

// Post-decrement Operator Overload
Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	operator--();
	return (tmp);
}


// Member Function Part ********************************************************//

// Get _number private attribute
int	Fixed::getRawBits(void) const
{
	return (this->_number);
}

// Fixed-point number as integer
int	Fixed::toInt(void) const
{
	return (_number >> _fraction);
}

// Fixed-point number as float
float	Fixed::toFloat(void) const
{
	return (_number / (float)(1 << _fraction));
}


// Static Member Function Part ********************************************************//

// Min of 2 fixed-point
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

// Min of 2 constant fixed-point
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

// Max of 2 fixed-point
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}

// Max of 2 constant fixed-point
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
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

