/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-sol <adel-sol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:55:00 by adel-sol          #+#    #+#             */
/*   Updated: 2021/09/27 11:25:45 by adel-sol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type( type ) {}

std::string const & Weapon::getType( void ) const {
	return this->_type;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}