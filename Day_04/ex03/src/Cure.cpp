/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:05:49 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 09:43:35 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

Cure::Cure( void ) {
	this->_type = "cure";
}

Cure::Cure( Cure const & copy ) {
	*this = copy;
}

Cure::~Cure( void ) {}

Cure& Cure::operator=( Cure const & rhs ) {
	this->_type = rhs.getType();
	return *this;
}

AMateria*	Cure::clone( void ) const {
	return new Cure();
}

void		Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}