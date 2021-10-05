/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:08:20 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 13:38:06 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice( void ) {
	this->_type = "ice";
}

Ice::Ice( Ice const & copy ) {
	*this = copy;
}

Ice::~Ice( void ) {}

Ice& Ice::operator=( Ice const & rhs ) {
	this->_type = rhs.getType();
	return *this;
}

AMateria*	Ice::clone( void ) const {
	return new Ice();
}

void		Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}