/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:22:44 by adel-sol          #+#    #+#             */
/*   Updated: 2021/10/04 14:48:10 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	this->_name = "Unkown";
	this->_size = 0;
}

Character::Character( std::string const & name ) {
	this->_name = name;
	this->_size = 0;
}

Character::Character( Character const & copy ) {
	*this = copy;
}

Character::~Character( void ) {
	for ( size_t i = 0; i < this->_size; i++ )
		delete this->_inventory[i];
}

Character&	Character::operator=( Character const & rhs ) {
	this->_name = rhs._name;
	for ( size_t i = 0; i < this->_size; i++ )
		delete this->_inventory[i];
	this->_size = rhs._size;
	for ( size_t i = 0; i < this->_size; i++ ) {
		if ( rhs._inventory[i]->getType() == "ice" ) {
			this->_inventory[i] = new Ice();
			*(this->_inventory[i]) = *(rhs._inventory[i]);
		}
		else if ( rhs._inventory[i]->getType() == "cure" ) {
			this->_inventory[i] = new Cure();
			*(this->_inventory[i]) = *(rhs._inventory[i]);
		}
	}
	return *this;
}

std::string const &	Character::getName( void ) const {
	return this->_name;
}
		
void				Character::equip( AMateria* m ) {
	if ( this->_size != 4 ) {
		this->_inventory[this->_size] = m;
		this->_size++;
	}
}

void				Character::unequip( int idx ) {
	if ( idx >= 0 && (size_t)idx < this->_size ) {
		for ( size_t i = idx; i < this->_size - 1; i++ )
			this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[this->_size - 1] = nullptr;
		if ( this->_size > 0 )
			this->_size--;
	}
}

void				Character::use( int idx, ICharacter& target ) {
	if ( idx >= 0 && (size_t)idx < this->_size )
		this->_inventory[idx]->use( target );
}