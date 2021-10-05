/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 07:46:05 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 13:43:49 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {}

AMateria::~AMateria( void ) {}

AMateria::AMateria( std::string const & type ) {
	this->_type = type;
}

std::string const &	AMateria::getType( void ) const {
	return this->_type;
}

void		AMateria::use( ICharacter& target ) {
	(void) target;
}