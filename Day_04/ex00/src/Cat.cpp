/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:20:25 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/03 15:20:55 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( Cat const & cpy ) {
	*this = cpy;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=( Cat const & rhs ) {
	this->type = rhs.getType();
	return *this;
}

void	Cat::makeSound ( void ) const {
	std::cout << "[ Miaouw ]" << std::endl;
}