/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:02:28 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/22 15:12:04 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {

	Contact::_instanceNum++;
	return ;
}

Contact::~Contact( void ) {

	Contact::_instanceNum--;
	return ;
}

std::string	Contact::getFirstName( void ) const {

	return this->_firstName;
}

std::string	Contact::getLastName( void ) const {

	return this->_lastName;
}

std::string	Contact::getNickname( void ) const {

	return this->_nickname;
}

std::string	Contact::getPhoneNumber( void ) const {

	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret( void ) const {

	return this->_darkestSecret;
}

void		Contact::setFirstName( std::string value ) {

	if ( value.length() >= 1 )
		this->_firstName = value;

	return ;
}

void		Contact::setLastName( std::string value ) {

	if ( value.length() >= 1 )
		this->_lastName = value;

	return ;
}

void		Contact::setNickname( std::string value ) {

	this->_nickname = value;
	return ;
}

void		Contact::setPhoneNumber( std::string value ) {

	if ( value.length() > 5 )
		this->_phoneNumber = value;

	return ;
}

void		Contact::setDarkestSecret( std::string value ) {

	this->_darkestSecret = value;
	return ;
}

int			Contact::getInstanceNum( void ) {

	return Contact::_instanceNum;
}

int			Contact::_instanceNum = 0;