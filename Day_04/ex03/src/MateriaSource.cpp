/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:12:42 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 14:23:33 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	this->_size = 0;
}

MateriaSource::MateriaSource( MateriaSource const & copy ) {
	*this = copy;
}
MateriaSource::~MateriaSource( void ) {
	for ( size_t i = 0; i < this->_size; i++ )
		delete this->_storage[i];
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & rhs ) {
	for ( size_t i = 0; i < this->_size; i++ )
		delete this->_storage[i];
	this->_size = rhs._size;
	for ( size_t i = 0; i < this->_size; i++ ) {
		if ( rhs._storage[i]->getType() == "ice" ) {
			this->_storage[i] = new Ice();
			*(this->_storage[i]) = *(rhs._storage[i]);
		}
		else if ( rhs._storage[i]->getType() == "cure" ) {
			this->_storage[i] = new Cure();
			*(this->_storage[i]) = *(rhs._storage[i]);
		}
	}
	return *this;
}

void			MateriaSource::learnMateria( AMateria* m ) {
	if ( this->_size < 4 ) {
		this->_storage[this->_size] = m;
		this->_size++;
	}
}

AMateria*		MateriaSource::createMateria( std::string const & type ) {
	for ( size_t i = 0; i < this->_size; i++ )
		if ( this->_storage[i]->getType() == type )
			return this->_storage[i]->clone();
	return 0;
}