/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:19:17 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/22 15:08:02 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook( void ) {

	this->_total = 0;
	return ;
}

Phonebook::~Phonebook( void ) {

	return ;
}

int		Phonebook::getTotal( void ) const {

	return this->_total;
}

void	Phonebook::addContact( std::string fn, std::string ln, std::string nn, 
	std::string pn, std::string ds ) {

	if ( this->_total < 8) {
		this->contacts[this->_total].setFirstName( fn );
		this->contacts[this->_total].setLastName( ln );
		this->contacts[this->_total].setNickname( nn );
		this->contacts[this->_total].setPhoneNumber( pn );
		this->contacts[this->_total].setDarkestSecret( ds );
		this->_total++;
	}

	return ;
}