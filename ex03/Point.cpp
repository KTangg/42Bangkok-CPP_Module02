#include "Point.hpp"

// Default Class Constructor
Point::Point(void) : _x(Fixed()), _y(Fixed())
{
}

// Copy Class Constructor
Point::Point(const Point &src)
{
	*this = src;
}

// 2-Float Class Constructor
Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
}


// Class Deconstructor
Point::~Point(void)
{
}

// Assign Operator Overlaod
Point	&Point::operator=(const Point &rhs)
{
	// Make your Assignment here
	_x = rhs.getX();
	_y = rhs.getY();
	return (*this);
}

// Equal to Comparison Overload
bool	Point::operator==(const Point &rhs)
{
	return ((rhs.getX() == _x) && (rhs.getY() == _y));
}

// Get _x value
Fixed	Point::getX(void) const
{
	return (this->_x);
}

// Get _y value
Fixed	Point::getY(void) const
{
	return (this->_y);
}

// Set _x value
void	Point::setX(Fixed x)
{
	_x = x;
}

// Set _y value
void	Point::setY(Fixed y)
{
	_y = y;
}

std::ostream	&operator<<(std::ostream &out, const Point &rhs)
{
	out << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return (out);
}
