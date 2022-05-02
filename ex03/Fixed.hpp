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

		// Comparison overload
		bool	operator>(Fixed const &rhs);
		bool	operator<(Fixed const &rhs);
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator==(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);

		// Operator overload
		Fixed	&operator=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);
		Fixed	&operator++(void);
		Fixed	operator++(int dummy);
		Fixed	&operator--(void);
		Fixed	operator--(int dummy);

		// Member Function Part
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// Static Member Function Part
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

	private:
		// Attributes
		int	_number;
		static int const	_fraction;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs);

#endif // **************************************************** __FIXED_HPP__ //
