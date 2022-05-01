#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>

class Fixed
{
	public:
		// Default Class Constructor
		Fixed(void);
		// Copy Class Constructor
		Fixed(Fixed const &src);
		// Class Deconstructor
		virtual	~Fixed(void);

		// Assign operator overload
		Fixed	&operator=(Fixed const &rhs);

		// Method Part
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		// Attributes
		int	_number;
		static int const	_fraction;
};

#endif // **************************************************** __FIXED_HPP__ //
