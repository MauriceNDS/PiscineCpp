/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:52:08 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 13:57:42 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( Dog const & cpy ) {
	*this = cpy;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=( Dog const & rhs ) {
	this->type = rhs.getType();
	return *this;
}

void	Dog::makeSound ( void ) const {
	std::cout << "[ Waf Waf ]" << std::endl;
}