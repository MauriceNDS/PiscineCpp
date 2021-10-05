/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:33:29 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 07:43:31 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal default constructor called" << std::endl; 
}

Animal::Animal( Animal const & cpy ) {
	*this = cpy;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
}
Animal&	Animal::operator=( Animal const & rhs ) {
	this->type = rhs.getType();
	return *this;
}

std::string	Animal::getType( void ) const {
	return this->type;
}