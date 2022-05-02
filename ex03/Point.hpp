#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
	public:
	 	// Default Class Constructor
		Point(void);
		// Copy Class Constructor
		Point(const Point &src);
		// 2-Float Class Constructor
		Point(const float x, const float y);
		// Class Deconstructor
		virtual	~Point(void);

		// Assign operator overload
		bool	operator==(const Point &rhs);
		Point	&operator=(const Point &rhs);

		// Function member part
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void	setX(Fixed x);
		void	setY(Fixed y);

	private:
		Fixed	_x;
		Fixed	_y;
};

std::ostream	&operator<<(std::ostream &out, const Point &rhs);

#endif // **************************************************** __POINT_HPP__ //
