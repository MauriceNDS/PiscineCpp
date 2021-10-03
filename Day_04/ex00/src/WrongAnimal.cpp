/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:34:57 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 15:38:11 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal default constructor called" << std::endl; 
}

WrongAnimal::WrongAnimal( WrongAnimal const & cpy ) {
	*this = cpy;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal&	WrongAnimal::operator=( WrongAnimal const & rhs ) {
	this->type = rhs.getType();
	return *this;
}

void		WrongAnimal::makeSound ( void ) const {
	std::cout << "[ WrongAnimal sound ]" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return this->type;
}