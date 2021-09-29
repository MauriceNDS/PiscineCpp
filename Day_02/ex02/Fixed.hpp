/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:31:18 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/29 09:12:41 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:

		int					_value;
		static int const	_fraction;

	public:
		
		Fixed( void );
		Fixed( int const value );
		Fixed( float const value );
		Fixed( Fixed const & cpy );
		~Fixed( void );
		
		Fixed&	operator=( Fixed const & rhs );
		bool	operator>( Fixed const & rhs );
		bool	operator<( Fixed const & rhs );
		bool	operator>=( Fixed const & rhs );
		bool	operator<=( Fixed const & rhs );
		bool	operator==( Fixed const & rhs );
		bool	operator!=( Fixed const & rhs );
		Fixed	operator+( Fixed const & rhs );
		Fixed	operator-( Fixed const & rhs );
		Fixed	operator*( Fixed const & rhs );
		Fixed	operator/( Fixed const & rhs );
		Fixed&	operator++( void );
		Fixed	operator++( int n );
		Fixed&	operator--( void );
		Fixed	operator--( int n );

		static Fixed&			min( Fixed& a, Fixed& b );
		static Fixed const &	min( Fixed const & a, Fixed const & b );
		static Fixed&			max( Fixed& a, Fixed& b );
		static Fixed const &	max( Fixed const & a, Fixed const & b );

		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
};

std::ostream&	operator<<( std::ostream& o, Fixed const & rhs );

#endif