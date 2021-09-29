/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:37:37 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/29 09:20:14 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fraction = 8;

Fixed::Fixed( void ) : _value( 0 ) {
}

Fixed::Fixed( int const value ) {
	this->_value = value << Fixed::_fraction;
}

Fixed::Fixed( float const value ) {
	this->_value = roundf( value * ( 1 << Fixed::_fraction ) );
}

Fixed::Fixed( Fixed const & cpy ) {
	*this = cpy;
}

Fixed::~Fixed( void ) {}

Fixed&	Fixed::operator=( Fixed const & rhs ) {
	this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	return this->_value;
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

float	Fixed::toFloat( void ) const {
	return this->_value / ( float )( 1 << Fixed::_fraction );
}

int		Fixed::toInt( void ) const {
	return this->_value >> Fixed::_fraction;
}

std::ostream&	operator<<( std::ostream& o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return o; 
}

bool	Fixed::operator>( Fixed const & rhs ) {
	return this->toFloat() > rhs.toFloat();
}

bool	Fixed::operator<( Fixed const & rhs ) {
	return this->toFloat() < rhs.toFloat();
}

bool	Fixed::operator>=( Fixed const & rhs ) {
	return this->toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<=( Fixed const & rhs ) {
	return this->toFloat() <= rhs.toFloat();
}

bool	Fixed::operator==( Fixed const & rhs ) {
	return this->toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=( Fixed const & rhs ) {
	return this->toFloat() != rhs.toFloat();
}

Fixed	Fixed::operator+( Fixed const & rhs ) {
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( Fixed const & rhs ) {
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( Fixed const & rhs ) {
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( Fixed const & rhs ) {
	return Fixed( this->toFloat() / rhs.toFloat() );
}

Fixed&	Fixed::operator++( void ) {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++( int n ) {
	( void ) n;
	Fixed	res;

	res = ++*this;
	return res;
}

Fixed&	Fixed::operator--( void ) {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--( int n ) {
	( void ) n;
	Fixed	res;

	res = --*this;
	return res;
}

Fixed&			Fixed::min( Fixed& a, Fixed& b ) {
	if ( a <= b )
		return a;
	return b;
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b ) {
	if ( a.toFloat() <= b.toFloat() )
		return a;
	return b;
}

Fixed&			Fixed::max( Fixed& a, Fixed& b ) {
	if ( a >= b )
		return a;
	return b;
}

Fixed const &	Fixed::max( Fixed const & a, Fixed const & b ) {
	if ( a.toFloat() >= b.toFloat() )
		return a;
	return b;
}