/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:38:28 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 15:38:46 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & cpy ) {
	*this = cpy;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( WrongCat const & rhs ) {
	this->type = rhs.getType();
	return *this;
}

void	WrongCat::makeSound ( void ) const {
	std::cout << "[ Miaouw ]" << std::endl;
}