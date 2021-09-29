/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:47:16 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/29 09:17:54 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	// Fixed	a( 10 );
	// Fixed	b( 42.42f );
	// Fixed	c( 42.42f );
	// Fixed	d( 42 );

	// std::cout << "a + b = " << a + b << std::endl;
	// std::cout << "a - b = " << a - b << std::endl;
	// std::cout << "a * b = " << a * b << std::endl;
	// std::cout << "a / b = " << a / b << std::endl;

	// std::cout << "a < b = " << (a < b) << std::endl;
	// std::cout << "a > b = " << (a > b) << std::endl;
	// std::cout << "d >= b = " << (d >= b) << std::endl;
	// std::cout << "d <= b = " << (d <= b) << std::endl;
	// std::cout << "d == b = " << (d == b) << std::endl;
	// std::cout << "b != c = " << (b != c) << std::endl;
	
	return 0;
}