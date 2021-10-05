/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:52:08 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 16:48:34 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( Dog const & cpy ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=( Dog const & rhs ) {
	this->type = rhs.getType();
	this->_brain = new Brain();
	for ( int i = 0; i < 100; i++ )
		this->_brain->ideas[i] = rhs.getBrain()->ideas[i];
	return *this;
}

void	Dog::makeSound ( void ) const {
	std::cout << "[ Waf Waf ]" << std::endl;
}

Brain*	Dog::getBrain( void ) const {
	return this->_brain;
}