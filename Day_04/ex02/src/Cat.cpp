/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:20:25 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 16:48:56 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( Cat const & cpy ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=( Cat const & rhs ) {
	this->type = rhs.getType();
	this->_brain = new Brain();
	for ( int i = 0; i < 100; i++ )
		this->_brain->ideas[i] = rhs.getBrain()->ideas[i];
	return *this;
}

void	Cat::makeSound ( void ) const {
	std::cout << "[ Miaouw ]" << std::endl;
}

Brain*	Cat::getBrain( void ) const {
	return this->_brain;
}