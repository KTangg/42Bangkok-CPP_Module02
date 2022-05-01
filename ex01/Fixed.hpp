#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <cmath>
# include <iostream>

class Fixed
{
	public:
		// Default Class Constructor
		Fixed(void);
		// Copy Class Constructor
		Fixed(Fixed const &src);
		// Int overload Constructor
		Fixed(const int nb);
		// Float overload Constructor
		Fixed(const float nb);
		// Class Deconstructor
		virtual	~Fixed(void);

		// Assign operator overload
		Fixed	&operator=(Fixed const &rhs);

		// Member Function Part
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		// Attributes
		int	_number;
		static int const	_fraction;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs);

#endif // **************************************************** __FIXED_HPP__ //
